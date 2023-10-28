#pragma once
#include "ImageProcessor.h"
class JPEGImageProcessor :
    public ImageProcessor
{
public:
    void load() override;

    void save() override;
};

