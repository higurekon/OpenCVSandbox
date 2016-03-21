#include "stdafx.h"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace std;
using namespace cv;

Mat source;
Mat dest;

int KERNEL_LENGTH = 25;

int main(int argc, char** argv)
{
	source = imread("lena.jpg", 1);
	dest = source.clone();
	GaussianBlur(source, dest, Size(KERNEL_LENGTH, KERNEL_LENGTH), 0, 0);
	imwrite("blurred_lena.jpg", dest);
}