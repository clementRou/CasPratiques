#pragma once
#ifndef DEF_DATA_AUGMENTATION_UTILS_CLASS
#define DEF_DATA_AUGMENTATION_UTILS_CLASS

#include "labeledImage.h"
#include <string>

class DataAugmentationUtils
{

public:
	DataAugmentationUtils();
	// Destructor

	// Assuming Image Data Bank are 
	static LabeledImage CreateImageFromFile(std::string file);
	static void SaveImageAsFile(LabeledImage image, std::string file);

};

#endif