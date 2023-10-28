#pragma once
#include "ImageProcessorFactory.h"
#include "JPEGImageProcessor.h"

class JPEGImageProcessorFactory :
    public ImageProcessorFactory
{
public:
    ImageProcessor* createImageProcessor() override;
};

