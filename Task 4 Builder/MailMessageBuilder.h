#pragma once
#include "MessageBuilder.h"
#include "MailMessage.h"

class MailMessageBuilder :
    public MessageBuilder
{
private:
    Message* message;
public:
    MailMessageBuilder();
    void createHeader() override;
    void createText() override;
    void createFooter() override;
    Message* build() override;

};

