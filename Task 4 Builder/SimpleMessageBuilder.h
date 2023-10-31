#pragma once
#include "MessageBuilder.h"
#include "SimpleMessage.h"

class SimpleMessageBuilder :
    public MessageBuilder
{
private:
    Message* message;
public:
    SimpleMessageBuilder();
    void createHeader() override;
    void createText() override;
    void createFooter() override;
    Message* build() override;

};

