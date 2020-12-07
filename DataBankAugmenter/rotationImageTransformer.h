#pragma once
#ifndef DEF_ROTATION_IMAGE_TRANSFORMER_CLASS
#define DEF_ROTATION_IMAGE_TRANSFORMER_CLASS

#include "imageTransformer.h"

class RotationImageTransformer : public ImageTransformer
{
private:
	int angleDegree;

public:
	RotationImageTransformer();
	RotationImageTransformer(int angle);
	// Destructor

	// Getters and Setters

protected:
	virtual void transform(LabeledImage image);
};


#endif
