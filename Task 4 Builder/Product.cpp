#include "Product.h"

void Product::ListParts()
{
    cout << "Product parts: ";
    for (string s : parts)
    {
        cout << s << ", ";
    }
    cout << "\n\n";
}