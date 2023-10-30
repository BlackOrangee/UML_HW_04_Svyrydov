#pragma once
#include "MessageBuilder.h"
#include "Product.h"

class SimpleMessageBuilder :
    public MessageBuilder
{
private:

    Product* product;
public:

    SimpleMessageBuilder();

    void Reset();

    void ProduceText() override;

    void ProduceImage() override;

    Product* GetProduct();
};

