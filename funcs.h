#pragma once 

void invert(std::string filename, int image[MAX_H][MAX_W], int height, int width);

void invert_half(std::string filename, int image[MAX_H][MAX_W], int height, int width);

void box(std::string filename, int image[MAX_H][MAX_W], int height, int width);

void frame(std::string filename, int image[MAX_H][MAX_W], int height, int width);

void scale (std::string filename, int image[MAX_H][MAX_W], int height, int width);

void pixel(std::string filename, int image[MAX_H][MAX_W], int height, int width);
