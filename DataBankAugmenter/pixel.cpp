#include "pixel.h"

Pixel::Pixel() :
	x(0), y(0), color()
{
}

Pixel::Pixel(const int x, const int y, const Color color) :
	x(x), y(y), color(color)
{
}