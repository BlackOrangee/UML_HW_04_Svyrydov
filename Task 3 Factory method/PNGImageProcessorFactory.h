#pragma once
#include "ImageProcessorFactory.h"
#include "PNGImageProcessor.h"

class PNGImageProcessorFactory :
    public ImageProcessorFactory
{
public:
    ImageProcessor* createImageProcessor() override;
};

