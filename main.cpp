#include <iostream>

#include <opencv2/opencv.hpp>
#include <tesseract/baseapi.h>

int main()
{
    cv::Mat buf_img;
    buf_img = cv::imread("/home/zt/work/opencv_work/test1.png");
    cv::cvtColor(buf_img,buf_img,CV_BGR2GRAY);
    cv::imshow("gray",buf_img);

    cv::Size outsize;
    outsize.width = buf_img.cols*2;
    outsize.height = buf_img.rows*2;
    cv::resize(buf_img,buf_img,outsize);

    tesseract::TessBaseAPI tess;
    tess.Init(NULL,"chi_sim",tesseract::OEM_DEFAULT);
    tess.SetPageSegMode(tesseract::PSM_SINGLE_BLOCK);
    tess.SetImage((uchar *)buf_img.data,buf_img.cols,buf_img.rows,1,buf_img.cols);

    const char *out = tess.GetUTF8Text();
    std::cout<<out<<std::endl;

    cv::waitKey(0);
    return 0;
}
