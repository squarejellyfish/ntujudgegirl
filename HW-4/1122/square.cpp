#include "square.h"
#include <iostream>

Square::Square()
{
    this->setLen(0);
}
Square::Square(int n)
{
    if (n < 1) {
        std::cout << "len setting error\n";
        n = 1;
    }
    this->setLen(n);
}
int Square::area()
{
    return this->len * this->len;
}
int Square::getLen()
{
    return this->len; 
}
void Square::setLen(int n)
{
    this->len = n;
}

void cmpSquare(Square &s1, Square &s2) {
    if (s1.getLen() == s2.getLen()) {std::cout << "1==2\n";return;}
    (s1.getLen() > s2.getLen()) ? (std::cout << "1>2\n") : (std::cout << "1<2\n");
}
