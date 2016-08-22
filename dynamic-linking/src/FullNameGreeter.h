//
// Created by Lucas Thompson on 22/08/2016.
//

#ifndef EMSCRIPTENMODULEINTEROPHELLOWORLD_FULLNAMEGREETER_H
#define EMSCRIPTENMODULEINTEROPHELLOWORLD_FULLNAMEGREETER_H

#include "Greeter.h"

class FullNameGreeter : public Greeter {
public:
    FullNameGreeter() = default;
    ~FullNameGreeter() {  std::cout << "~FullNameGreeter" << std::endl; };
    std::string greet(const Name& name) override;
};


#ifdef __cplusplus
extern "C" {
#endif

extern void* createFullNameGreeter() {
    return new FullNameGreeter();
}

#ifdef __cplusplus
};
#endif


#endif //EMSCRIPTENMODULEINTEROPHELLOWORLD_FULLNAMEGREETER_H
