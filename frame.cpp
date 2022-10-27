#include <iostream>
#include <string>
#include "imageio.h"

void frame(std::string filename, int image[MAX_H][MAX_W], int height, int width ) {
	readImage(filename, image, height, width);
	 
	int out[MAX_H][MAX_W];

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			if (row == height/4 && col < (width/4)*3 && col > width/4) {
				out[row][col] = 255;
			}
			else if (row == (height/4) * 3 && col < (width/4) * 3 && col > width/4) {
				out[row][col] = 255;
			}
			else if (col == width/4 && row < (height/4)*3 && row > height/4) {
				out[row][col] = 255;
			}
			else if (col == (width/4) * 3 && row < (height/4)*3 && row > height/4) {
				out[row][col] = 255;
			}
			else {
				out[row][col] = image[row][col];
			}
		}
	}
	writeImage("taskD.pgm", out, height, width);
}
