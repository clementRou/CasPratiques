#pragma once
#ifndef DEF_PIXEL_CLASS
#define DEF_PIXEL_CLASS

#include "color.h"

class Pixel
{
private:
	int x;
	int y;
	Color color;

public:
	Pixel();
	Pixel(const int x, const int y, const Color color);
	// Destructor

	// Getters and Setters
};

#endif