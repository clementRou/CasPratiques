#include "labeledImage.h"

LabeledImage::LabeledImage() :
	Image(), containsUnattendedBag(false)
{
}

LabeledImage::LabeledImage(const int xLeft, const int xRight, const int yBottom, const int yTop, const bool label) :
	Image(xLeft, xRight, yBottom, yTop), containsUnattendedBag(label)
{
}