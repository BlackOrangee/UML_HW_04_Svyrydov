// Task 3 Factory method.
//

#include <iostream>
#include "ImageProcessor.h"
#include "ImageProcessorFactory.h"
#include "JPEGImageProcessorFactory.h"
#include "PNGImageProcessorFactory.h"

using namespace std;

void Client(ImageProcessorFactory* factory)
{
    ImageProcessor* processor = factory->createImageProcessor();
    processor->load();
    processor->save();
}

int main() {
    ImageProcessorFactory* JPEGfactory = new JPEGImageProcessorFactory(); // Можна змінювати фабрику для обробки різних типів зображень

    Client(JPEGfactory);
    
    ImageProcessorFactory* PNGfactory = new PNGImageProcessorFactory(); // Можна змінювати фабрику для обробки різних типів зображень

    Client(PNGfactory);
}
