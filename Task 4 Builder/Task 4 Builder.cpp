// Task 4 MessageBuilder.
//

#include <iostream>
#include <vector>
#include "Product.h"
#include "MessageBuilder.h"
#include "MailMessageBuilder.h"
#include "SimpleMessageBuilder.h"

using namespace std;

void ClientCode()
{
    cout << "Text messenger:\n";
    SimpleMessageBuilder* textBuilder = new SimpleMessageBuilder();
    textBuilder->ProduceText();

    Product* textProduct = textBuilder->GetProduct();
    textProduct->ListParts();


    cout << "Mail messenger:\n";
    MailMessageBuilder* mailBuilder = new MailMessageBuilder();
    mailBuilder->ProduceText();
    mailBuilder->ProduceImage();

    Product* mailProduct = mailBuilder->GetProduct();
    mailProduct->ListParts();

}

int main() {
    ClientCode();
}