//
// Created by Randy on 19/3/2022.
//

#ifndef LAB01_INHERITANCE_BASE_H
#define LAB01_INHERITANCE_BASE_H

class Base {
public:
    Base();

    virtual ~Base();

    virtual void do_something()=0;
};

#endif //LAB01_INHERITANCE_BASE_H
