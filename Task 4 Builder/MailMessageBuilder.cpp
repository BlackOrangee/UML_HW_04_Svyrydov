#include "MailMessageBuilder.h"

MailMessageBuilder::MailMessageBuilder()
{
    this->Reset();
}

void MailMessageBuilder::Reset()
{
    this->product = new Product();
}

void MailMessageBuilder::ProduceText()
{
    this->product->parts.push_back("Text");
}

void MailMessageBuilder::ProduceImage()
{
    this->product->parts.push_back("Image");
}

Product* MailMessageBuilder::GetProduct()
{
    Product* result = this->product;
    this->Reset();
    return result;
}