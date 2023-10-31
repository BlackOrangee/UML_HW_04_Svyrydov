#pragma once
#include <vector>
#include <iostream>
using namespace std;

class Message
{
public:
	virtual void addPart(string) = 0;
	
	virtual void printParts() = 0;
};

