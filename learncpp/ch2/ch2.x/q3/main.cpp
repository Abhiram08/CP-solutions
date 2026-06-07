#include "io.h"
#include <iostream>

int main()
{
    int a{readNumber()};
    int b{readNumber()};
    writeAnswer(a + b);
    return 0;
}