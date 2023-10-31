#pragma once
#include "Message.h"

class MessageBuilder {
public:
    virtual void createHeader() = 0;
    virtual void createText() = 0;
    virtual void createFooter() = 0;
    virtual Message* build() = 0;

};