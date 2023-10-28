#include "JPEGImageProcessorFactory.h"

ImageProcessor* JPEGImageProcessorFactory::createImageProcessor()
{
    ImageProcessor* result = new JPEGImageProcessor();
    return result;
}