#include <iostream>
#include <string>
#include "imageio.h"
#include "scale.h"

void scale (std::string filename, int image[MAX_H][MAX_W], int height, int width ) {
	readImage(filename, image, height, width);

	int out[MAX_H][MAX_W];
	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			out[row * 2][col * 2] = image[row][col];
			out[row * 2][col * 2 + 1] = image[row][col];
			out[row * 2 + 1][col * 2] = image[row][col];
			out[row * 2 + 1][col * 2 + 1] = image[row][col];
		}
	}
	
	writeImage("taskE.pgm", out, height*2, width*2);
}
