#include <iostream>
#include <opencv2/opencv.hpp>
#include "OpticalFlow.h"

int main() {
    //cv::VideoCapture cap("video.mp4"); // Example for video
    std::string cam_pipeline_str = "nvarguscamerasrc sensor-id=0 ! video/x-raw(memory:NVMM),format=NV12,width=1280,height=720,framerate=30/1 ! nvvidconv ! video/x-raw,format=BGRx ! videoconvert ! video/x-raw,format=BGR ! appsink drop=1";
    cv::VideoCapture cap(cam_pipeline_str, cv::CAP_GSTREAMER);

    // cv::VideoCapture cap(0); // Example for webcam
    // cv::Mat frame = cv::imread("image1.png"); // Example for single image

    if (!cap.isOpened()) {
        std::cerr << "Error opening video capture\n";
        return 1;
    }

    cv::Mat prevFrame, currFrame;

    // Capture the first frame
    cap >> prevFrame;

    while (cap.isOpened()) {
        // Capture the current frame
        cap >> currFrame;

        // Check if frame is captured successfully 
        if (currFrame.empty()) {
            break;
        }

        // Calculate optical flow
        OpticalFlow opticalFlow;
        cv::Mat flow = opticalFlow.calculateOpticalFlow(prevFrame, currFrame);

        // Process or visualize the optical flow (replace with your logic)
        // For example, you can visualize the flow using OpenCV functions

        // Display the current frame with optical flow
        cv::imshow("Optical Flow", currFrame);
        cv::imshow("Optical Flow Vectors", flow);

        // Update frames for next iteration
        prevFrame = currFrame.clone();  // Clone to avoid modifying original frame

        // Exit loop if 'q' key is pressed
        if (cv::waitKey(1) == 'q') {
            break;
        }
    }

    // Release resources
    cap.release();
    cv::destroyAllWindows();

    return 0;
}


