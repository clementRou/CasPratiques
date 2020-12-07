#include "rotationImageTransformer.h"

RotationImageTransformer::RotationImageTransformer() :
	ImageTransformer(), angleDegree(0)
{
}

RotationImageTransformer::RotationImageTransformer(int angle) :
	ImageTransformer(), angleDegree(angle)
{
}


/**
	Create rotated Image of input image depending on member angleDegree

*/
void RotationImageTransformer::transform(LabeledImage image)
{
}

