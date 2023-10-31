#pragma once
#include "Message.h"
class MailMessage :
    public Message
{
private:
	vector<string> parts;

public:
	void addPart(string) override;

	void printParts() override;
};

