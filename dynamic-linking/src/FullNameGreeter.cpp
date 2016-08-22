//
// Created by Lucas Thompson on 22/08/2016.
//

#include "FullNameGreeter.h"
#include <sstream>

std::string FullNameGreeter::greet(const Name& name)
{
    std::stringstream greeting;
    greeting << "Hello, " << name.getFirst() << " " << name.getLast() << "!";
    return greeting.str();
}