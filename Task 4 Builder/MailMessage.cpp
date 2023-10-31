#include "MailMessage.h"

void MailMessage::addPart(string part)
{
	parts.push_back(part);
}

void MailMessage::printParts()
{
	for (string s : parts)
	{
		cout << s << ", ";
	}
}
