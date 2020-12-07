#pragma once
#ifndef DEF_FLIP_IMAGE_TRANSFORMER_CLASS
#define DEF_FLIP_IMAGE_TRANSFORMER_CLASS

#include "imageTransformer.h"

class FlipImageTransformer : public ImageTransformer
{

public:
	FlipImageTransformer();
	// Destructor

private:
	virtual void transform(LabeledImage image);
};


#endif
