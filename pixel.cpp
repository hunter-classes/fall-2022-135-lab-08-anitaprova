#include <iostream>
#include <string>
#include "imageio.h"

void pixel(std::string filename, int image[MAX_H][MAX_W], int height, int width) {
	readImage(filename, image, height, width);
	 
	int out[MAX_H][MAX_W];

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			int avg = (image[row][col] + image[row][col + 1] + image[row + 1][col] + image[row + 1][col + 1]) / 4;
			out[row][col] = avg;
			avg += 0.5; //rounding 
			out[row][col + 1] = avg;
			out[row + 1][col] = avg;
			out[row + 1][col + 1] = avg;
			col++;
		}
		row++;
	}
	writeImage("taskF.pgm", out, height, width);
}
