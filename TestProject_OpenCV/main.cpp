#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

int main()
{
    cv::Mat img = cv::imread("OpenCV_logo.png", cv::IMREAD_UNCHANGED);

    cv::Mat imgBlurred;
    cv::blur(img, imgBlurred, cv::Size(5, 5));

    cv::imwrite("OpenCV_logo-blurred.png", imgBlurred);
}
