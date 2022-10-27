#include <iostream>
#include <string>
#include "imageio.h"

void frame(std::string filename, int image[MAX_H][MAX_W], int height, int width ) {
	readImage(filename, image, height, width);
	 
	int out[MAX_H][MAX_W];

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			out[row][col] = image[row][col];
		}
	}
	writeImage("taskA.pgm", out, height, width);
}
