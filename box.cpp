#include <iostream>
#include <string>
#include "imageio.h"

void box(std::string filename, int image[MAX_H][MAX_W], int height, int width) {
	readImage(filename, image, height, width);
	 
	int out[MAX_H][MAX_W];

	for (int row = 0; row < height; row++) { //fills the array first
		for (int col = 0; col < width; col++) {
			out[row][col] = image[row][col];
		}
	}

	for (int row = height/4; row < (height/4)*3; row++) {
		for (int col = width/4; col < (width/4)*3; col++) {
			out[row][col] = 255;
		}
	}

	writeImage("taskC.pgm", out, height, width);
}
