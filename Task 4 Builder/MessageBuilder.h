#pragma once

class MessageBuilder {
public:
    virtual void ProduceText() = 0;
    virtual void ProduceImage() = 0;
};