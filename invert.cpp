#include <iostream>
#include <string>
#include <cmath>
#include "imageio.h"

void invert(std::string filename, int image[MAX_H][MAX_W], int height, int width ) {
	readImage(filename, image, height, width);
	 
	int out[MAX_H][MAX_W];

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			int num = image[row][col];
			num = abs(255 - num);
			out[row][col] = num;
		}
	}

	writeImage("taskA.pgm", out, height, width);
}



