#include "PNGImageProcessor.h"

void PNGImageProcessor::load()
{
	cout << "Loading PNG image" << endl;
}

void PNGImageProcessor::save()
{
	cout << "Saving PNG image" << endl;
}

ImageProcessor* PNGImageProcessor::Create()
{
	ImageProcessor* toReturn = new PNGImageProcessor();
	return toReturn;
}
