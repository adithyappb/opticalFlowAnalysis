#include "OpticalFlow.h"

OpticalFlow::OpticalFlow() {
    // Constructor implementation (if needed)
}

OpticalFlow::~OpticalFlow() {
    // Destructor implementation (if needed)
}

cv::Mat OpticalFlow::calculateOpticalFlow(const cv::Mat& prevFrame, const cv::Mat& currFrame) {
    // Implement optical flow calculation here
    // This function takes two consecutive frames (prevFrame and currFrame)
    // as input and returns a cv::Mat representing the optical flow

    cv::Mat flow;
    cv::Ptr<cv::FarnebackOpticalFlow> farneback = cv::FarnebackOpticalFlow::create();
    farneback->calc(prevFrame, currFrame, flow);

    return flow;
}



