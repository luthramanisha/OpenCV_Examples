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

	VideoCapture _vidCap(fileName);
  	char key = ' ';
  	assert(_vidCap.isOpened());
  	Mat src;
  	_vidCap.read(src);
  	imshow("Frame", src);

}
