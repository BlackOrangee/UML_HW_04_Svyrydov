#include "SimpleMessageBuilder.h"

SimpleMessageBuilder::SimpleMessageBuilder()
{
    this->Reset();
}

void SimpleMessageBuilder::Reset()
{
    this->product = new Product();
}

void SimpleMessageBuilder::ProduceText()
{
    this->product->parts.push_back("Text");
}

void SimpleMessageBuilder::ProduceImage()
{
    this->product->parts.push_back("Not support images");
}

Product* SimpleMessageBuilder::GetProduct()
{
    Product* result = this->product;
    this->Reset();
    return result;
}