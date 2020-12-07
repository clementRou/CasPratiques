#pragma once
#ifndef DEF_IMAGE_CLASS
#define DEF_IMAGE_CLASS

#include "pixel.h"
#include <vector>

class Image
{
private:
	std::vector<std::vector<Pixel>> pixelMatrix;
	int xLeft;
	int xRight;
	int yBottom;
	int yTop;

public:
	Image();
	Image(const int xLeft, const int xRight, const int yBottom, const int yTop);
	// Destructor

	// Getters and Setters
};

#endif