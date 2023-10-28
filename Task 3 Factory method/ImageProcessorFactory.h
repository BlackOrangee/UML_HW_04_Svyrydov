#pragma once
#include "ImageProcessor.h"

class ImageProcessorFactory 
{
public:
    virtual ImageProcessor* createImageProcessor() = 0;
};