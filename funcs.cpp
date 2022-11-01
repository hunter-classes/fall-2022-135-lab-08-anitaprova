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

void invert_half(std::string filename, int image[MAX_H][MAX_W], int height, int width) {
        readImage(filename, image, height, width);

        int out[MAX_H][MAX_W];

        for (int row = 0; row < height; row++) {
                for (int col = 0; col < width; col++) {
                        int num = image[row][col];
                        if (col > width/2) {
                                num = abs(255 - num);
                                out[row][col] = num;
                        }
                        else {
                                out[row][col] = num;
                        }
                }
        }

        writeImage("taskB.pgm", out, height, width);
}

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
