//
// Created by Lucas Thompson on 22/08/2016.
//

#ifndef EMSCRIPTENMODULEINTEROPHELLOWORLD_GREETER_H
#define EMSCRIPTENMODULEINTEROPHELLOWORLD_GREETER_H


#include <string>
#include <iostream>
#include "Name.h"

class Greeter {
public:
    virtual ~Greeter() { std::cout << "~Greeter" << std::endl; };
    virtual std::string greet(const Name& name) = 0;
};


#endif //EMSCRIPTENMODULEINTEROPHELLOWORLD_GREETER_H
