#include "MailMessageBuilder.h"

MailMessageBuilder::MailMessageBuilder()
{
	this->message = new MailMessage();
}

void MailMessageBuilder::createHeader()
{
	message->addPart("Mail header");
}

void MailMessageBuilder::createText()
{
	message->addPart("Mail text");
}

void MailMessageBuilder::createFooter()
{
	message->addPart("Mail footer");
}

Message* MailMessageBuilder::build()
{
	return message;
}
