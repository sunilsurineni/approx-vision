//
// OpenCV JPEG Compression Image Benchmark
//
// This file loads a three channel image file and nothing else.
// Its primary purpose is to have its profile subtracted
// from each of the OpenCV stage profiles.

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv; 

int main(int argc, char** argv )
{

  Mat in_img;

  in_img = imread("../benchmark_images/beer_hall.raw_3C.png");

  //imwrite("out.png",in_img);

  imwrite("out.jpg",in_img);

  return 0;

}
