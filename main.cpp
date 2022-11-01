#include <iostream>
#include <string>
#include "imageio.h"
#include "funcs.h"

int main() {
	std::string file = "inImage.pgm";
	int img[MAX_H][MAX_W];
	int h, w;

	//TASK A
	invert(file, img, h, w);
	
	//TASK B	
	invert_half(file, img, h, w);

	//TASK C
	box(file, img, h, w);
	
	//TASK D
	frame(file, img, h, w);
	
	//TASK E
	scale(file, img, h, w);

	//TASK F
	pixel(file, img, h, w);
	
	return 0;
}
