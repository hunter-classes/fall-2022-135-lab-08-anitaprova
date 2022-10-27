#include <iostream>
#include <string>
#include "imageio.h"
#include "scale.h"

void scale (std::string filename, int image[MAX_H][MAX_W], int height, int width ) {
	readImage(filename, image, height, width);

	int c[MAX_H][MAX_W];
	for (int row = 0; row < height; row++) { //copy whole thing
		for (int col = 0; col < width; col++) {
			c[row][col] = image[row][col];
		}
	}
	
	int out[MAX_H][MAX_W];
	for (int row = 0; row < height * 2; row++) {
		for (int col = 0; col < width * 2; col++) {
			out[row][col] = c[row][col];
			out[row][col+1] = c[row][col];
			out[row+1][col] = c[row][col];
			out[row+1][col+1] = c[row][col];
			col++;
		}
		row++;
	}
	
	writeImage("taskE.pgm", out, height, width);
}
