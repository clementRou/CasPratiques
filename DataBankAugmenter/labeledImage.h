#pragma once
#ifndef DEF_LABELED_IMAGE_CLASS
#define DEF_LABELED_IMAGE_CLASS

#include "image.h"

class LabeledImage : public Image
{
private:
	bool containsUnattendedBag;

public:
	LabeledImage();
	LabeledImage(const int xLeft, const int xRight, const int yBottom, const int yTop, const bool label);
	// Destructor

	// Getters and Setters
};


#endif
