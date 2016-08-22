//
// Created by Lucas Thompson on 22/08/2016.
//

#include "InitialedGreeter.h"
#include <sstream>

std::string InitialedGreeter::greet(const Name& name)
{
    std::stringstream greeting;
    greeting << "Hello, " << name.getFirst().front() << ". " << name.getLast() << "!";
    return greeting.str();
}