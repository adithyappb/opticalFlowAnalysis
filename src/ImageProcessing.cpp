#include "ImageProcessing.h"

// Function to load an image from file
cv::Mat loadImage(const std::string& filename) {
    cv::Mat image = cv::imread(filename, cv::IMREAD_UNCHANGED);
    if (image.empty()) {
        std::cerr << "Error: Couldn't load image " << filename << std::endl;
    }
    return image;
}

// Function to save an image to file
void saveImage(const std::string& filename, const cv::Mat& image) {
    cv::imwrite(filename, image);
}

// Function to display an image in a window
void displayImage(const std::string& windowName, const cv::Mat& image) {
    cv::namedWindow(windowName, cv::WINDOW_NORMAL);
    cv::imshow(windowName, image);
    cv::waitKey(0);
    cv::destroyAllWindows();
}


