#pragma once
#include "ImageProcessor.h"
class PNGImageProcessor :
    public ImageProcessor
{
public:
    void load() override;

    void save() override;

    ImageProcessor* Create() override;
};

