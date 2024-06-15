#ifndef OPTICALFLOW_H
#define OPTICALFLOW_H

#include <opencv2/opencv.hpp>

class OpticalFlow {
public:
    OpticalFlow();
    ~OpticalFlow();

    cv::Mat calculateOpticalFlow(const cv::Mat& prevFrame, const cv::Mat& currFrame);

private:
    // Add private member variables or methods as needed
};

#endif // OPTICALFLOW_H

