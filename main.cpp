//
//  main.cpp
//  OpenCV_Tutorial
//
//  Created by Chenhao Han on 2/24/16.
//  Copyright © 2016 Chenhao Han. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "geometry.h"


/*---------------Runtime Stream Video------------------*/

int main(){
    
//    cv::VideoCapture    cap(0);
//    
//    while (true)
//    {
//        cv::Mat     webcam;
//        
//        cap.read(webcam);
//        cv::Mat img = webcam.clone();
//        cv::Mat img_gray;
//        std::cout << "webcam image type" << img.type() << std::endl;
//        std::cout << "webcam image depth: "<< img.channels() << std::endl;
//        std::cout << "webcam image resolution: " << img.cols << " x "<<img.rows <<std::endl;
//
//        cv::cvtColor(img, img_gray, CV_BGR2GRAY);
//        cv::imshow("original image", img);
//        
//        cv::imshow("gray image", img_gray);
//        
//        static int cnt = 0;
//        std::stringstream ss;
//        ss << "Yo Yo Check it now! " << cnt;
//        
//        cv::Mat canvas(img_gray.size(),CV_8UC3);
//        cv::cvtColor(img_gray, canvas, CV_GRAY2BGR);
//        
//        std::cout << " canvas type: " << canvas.type() << std::endl;
//        cv::putText(canvas, ss.str(), cv::Point(50,50), CV_FONT_HERSHEY_PLAIN, 2, cv::Scalar(0,0,255));
//        cv::imshow("canvas", canvas);
//        
//        cv::waitKey(5);
//        
//        cnt++;
//    }
    CH::My2Dpointi testpoint1(5,3);
    std::cout << "My 2d point1: " << testpoint1 << std::endl;
    
    CH::My2Dpointi testpoint2(4,6);
    std::cout << "My 2d point2: " << testpoint2 << std::endl;
    
    CH::My2Dpointi sumpoint;
    sumpoint = testpoint1 + testpoint2;
    std::cout << "sum point is: " << sumpoint << std::endl;
    
    CH::My2Dpointi diff;
    diff = testpoint1 - testpoint2;
    std::cout << "diff of two point is: " << diff << std::endl;
    
    std::cout << "distance between two points is: " << diff.norm() << std::endl;
    return 0;
}



/*------------------Load and display images---------------------*/
//int main(){
//    // load an image
//    cv::Mat img = cv::imread("/Users/chenhaohan/Desktop/test.jpg");
//    // check if image was loaded
//    if (img.data){
//        std::cout<< "Image loaded"<<std::endl;
//    }
//    else{
//        std::cout<<"Image not loaded"<<std::endl;
//    }
//    // create a window and show the image
//    cv::imshow("my image", img);
//    // wait for a key press
//    cv::waitKey();
//}












