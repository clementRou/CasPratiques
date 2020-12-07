#include "imageTransformer.h"

ImageTransformer::ImageTransformer()
{
}


/**
	for each file in folder, use DataAugmentationUtils::CreateImageFromFile(file) to create Image
	then call transform(image) and DataAugmentationUtils::SaveImageAsFile(image, outputFile)
*/
void ImageTransformer::processFolder(std::string inputFolder, std::string outputFolder)
{
}

