#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>

#include <opencv2/opencv.hpp>   
#include <opencv2/core/core.hpp>   
#include <opencv2/highgui/highgui.hpp>  

using namespace cv;

void main()
{
	Mat img = imread("cclabeling_input.bmp");

	imshow("cclabeling_input", img);
	waitKey(0);

	imwrite("cclabeling_output.jpg", img);

}