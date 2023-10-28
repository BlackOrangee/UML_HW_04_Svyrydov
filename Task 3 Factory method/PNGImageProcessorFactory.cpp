#include "PNGImageProcessorFactory.h"

ImageProcessor* PNGImageProcessorFactory::createImageProcessor()
{
    ImageProcessor* result = new PNGImageProcessor();
    return result;
}