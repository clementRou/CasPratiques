// DataBankAugmenter.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "flipImageTransformer.h"
#include "rotationImageTransformer.h"

#include <memory>
#include<string>

using namespace std;

void createFlippedImages(string inputFolder, string outputFolder)
{
    std::unique_ptr<FlipImageTransformer> flipTransformer = make_unique<FlipImageTransformer>();
    flipTransformer->processFolder(inputFolder, outputFolder);
}

void createRotatedImages(string inputFolder, string outputFolder, int angle)
{
    std::unique_ptr<RotationImageTransformer> rotationTransformer = make_unique<RotationImageTransformer>(angle);
    rotationTransformer->processFolder(inputFolder, outputFolder);
}

int main()
{
    string inputFolder = "...inputFolder";
    string outputFolder = "...outputFolder";

    createFlippedImages(inputFolder, outputFolder);
    createRotatedImages(inputFolder, outputFolder, 90);
    createRotatedImages(inputFolder, outputFolder, 180);
    createRotatedImages(inputFolder, outputFolder, 270);
 }