#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/core/core.hpp"
#include <stdlib.h>
#include <time.h>

using namespace std;
using namespace cv;
int main(int argc, char ** argv) {

	std::string fileName = argv[1];

	if (argc > 1) { fileName = argv[1]; }
	Mat src = imread(filename, CV_LOAD_IMAGE_COLOR);
  	imshow("Frame", src);

}
