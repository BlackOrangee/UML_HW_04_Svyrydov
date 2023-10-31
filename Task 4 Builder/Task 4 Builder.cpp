// Task 4 MessageBuilder.
//

#include <iostream>
#include <vector>
#include "MessageBuilder.h"
#include "MailMessageBuilder.h"
#include "SimpleMessageBuilder.h"
#include "Message.h"
#include "MailMessage.h"
#include "SimpleMessage.h"

using namespace std;

int main()
{
	MessageBuilder* builder = new MailMessageBuilder();

	builder->createHeader();
	builder->createText();
	builder->createFooter();
	
	Message* mail = builder->build();

	cout << "\nMail message parts:\n";
	mail->printParts();


	builder = new SimpleMessageBuilder();

	builder->createHeader();
	builder->createText();
	builder->createFooter();

	Message* simple = builder->build();

	cout << "\nSimple message parts:\n";
	simple->printParts();
}