#include "JPEGImageProcessor.h"

void JPEGImageProcessor::load()
{
	cout << "Loading JPEG image" << endl;
}

void JPEGImageProcessor::save()
{
	cout << "Saving JPEG image" << endl;
}

ImageProcessor* JPEGImageProcessor::Create()
{
	ImageProcessor* toReurn = new JPEGImageProcessor();
	return toReurn;
}