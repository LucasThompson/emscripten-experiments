//
// Created by Lucas Thompson on 22/08/2016.
//

#ifndef EMSCRIPTENMODULEINTEROPHELLOWORLD_INITIALEDGREETER_H
#define EMSCRIPTENMODULEINTEROPHELLOWORLD_INITIALEDGREETER_H

#include "Greeter.h"
#include <iostream>

class InitialedGreeter : public Greeter {
public:
    InitialedGreeter() = default;
    ~InitialedGreeter() {  std::cout << "~InitialedGreeter" << std::endl; }
    std::string greet(const Name& name) override;
};

#ifdef __cplusplus
extern "C" {
#endif

extern void* createInitialedGreeter() {
    return new InitialedGreeter();
}

#ifdef __cplusplus
};
#endif

#endif //EMSCRIPTENMODULEINTEROPHELLOWORLD_INITIALEDGREETER_H
