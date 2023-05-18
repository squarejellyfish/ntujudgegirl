#include "square.h"
#include <iostream>

Square::Square() {
    this->len = 0;
} 

Square::Square(int n) {
    setLen(n);
}

int Square::area()
{
    return this->len * this->len;
}

void Square::setLen(int n) {
    if (n < 1) {
        std::cout << "len setting error\n";
        n = 1;
    }
    this->len = n;
}

int Square::getLen() {
    return this->len;
}
