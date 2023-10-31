// Task 3 Factory method.
//

#include <iostream>
#include "ImageProcessor.h"
#include "JPEGImageProcessor.h"
#include "PNGImageProcessor.h"

using namespace std;


int main()
{
	ImageProcessor* JPEG = new JPEGImageProcessor();
	
	JPEG->load();
	JPEG->save();
	
	ImageProcessor* PNG = new PNGImageProcessor();

	PNG->load();
	PNG->save();
}
