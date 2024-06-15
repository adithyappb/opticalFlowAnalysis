#ifndef IMAGEPROCESSING_H
#define IMAGEPROCESSING_H

#include <opencv2/opencv.hpp>

class ImageProcessing {
public:
    ImageProcessing();
    ~ImageProcessing();

    // Declare your image processing functions here
    cv::Mat preprocessImage(const cv::Mat& image);

private:
    // Declare private members or methods as needed
};

#endif // IMAGEPROCESSING_H


