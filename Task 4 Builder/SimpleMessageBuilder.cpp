#include "SimpleMessageBuilder.h"


SimpleMessageBuilder::SimpleMessageBuilder()
{
	this->message = new SimpleMessage();
}

void SimpleMessageBuilder::createHeader()
{
	message->addPart("Simple header");
}

void SimpleMessageBuilder::createText()
{
	message->addPart("Simple text");
}

void SimpleMessageBuilder::createFooter()
{
	message->addPart("Simple footer");
}

Message* SimpleMessageBuilder::build()
{
	return message;
}