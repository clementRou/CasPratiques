#pragma once
#ifndef DEF_IMAGE_TRANSFORMER_CLASS
#define DEF_IMAGE_TRANSFORMER_CLASS

#include "labeledImage.h"
#include <string>

class ImageTransformer
{

public:
	ImageTransformer();
	// Destructor

	// Methods
	virtual void processFolder(std::string inputFolder, std::string outputFolder);
	
protected:
	virtual void transform(LabeledImage image) = 0;

};

#endif