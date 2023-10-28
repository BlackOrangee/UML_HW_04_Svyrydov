#pragma once
#include <iostream>
using namespace std;

class ImageProcessor
{
public:
    virtual void load() = 0;

    virtual void save() = 0;
};

