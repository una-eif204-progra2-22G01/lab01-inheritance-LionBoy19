#include <iostream>
#include "Derived1.h"
#include "Derived2.h"

int main() {
    std::cout << "Welcome to the UNA!" << std::endl;

    Derived1 derived1;
    derived1.do_something();

    Derived2 derived2;
    derived2.do_something();
}
