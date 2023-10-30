#pragma once
#include "MessageBuilder.h"
#include "Product.h"

class MailMessageBuilder :
    public MessageBuilder
{
private:

    Product* product;
public:

    MailMessageBuilder();

    void Reset();

    void ProduceText() override;

    void ProduceImage() override;

    Product* GetProduct();
};

