#include <iostream>
#include <string>
#include "imageio.h"
#include "invert.h"
#include "invert-half.h"
#include "box.h"
#include "frame.h"
#include "scale.h"

int main() {
	std::string file1 = "image1.pgm";
	std::string file2 = "image2.pgm";
	std::string file3 = "inImage.pgm";
	int img[MAX_H][MAX_W];
	int h, w;

	//TASK A
	invert(file3, img, h, w);
	
	//TASK B	
	invert_half(file3, img, h, w);

	//TASK C
	box(file3, img, h, w);
	
	//TASK D
	frame(file3, img, h, w);
	
	//TASK E
	scale(file3, img, h, w);

	return 0;
}
