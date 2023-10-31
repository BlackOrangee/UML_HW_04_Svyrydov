#include "SimpleMessage.h"

void SimpleMessage::addPart(string part)
{
	parts.push_back(part);
}

void SimpleMessage::printParts()
{
	for (string s : parts)
	{
		cout << s << ", ";
	}
}