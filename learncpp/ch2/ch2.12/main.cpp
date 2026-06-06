#include "square.h"
#include <iostream>

int main()
{
    std::cout << "A square has " << getSquareSides() << " sides";
    std::cout << "The perimeter of a square with side 5 is " << getSquarePerimeter(5);
}