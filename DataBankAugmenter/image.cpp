#include "image.h"

Image::Image() :
	xLeft(0), xRight(0), yBottom(0), yTop(0)
{
	this->pixelMatrix = std::vector<std::vector<Pixel>>();
}

Image::Image(const int xLeft, const int xRight, const int yBottom, const int yTop) :
	xLeft(xLeft), xRight(xRight), yBottom(yBottom), yTop(yTop)
{
	this->pixelMatrix = std::vector<std::vector<Pixel>>();
}