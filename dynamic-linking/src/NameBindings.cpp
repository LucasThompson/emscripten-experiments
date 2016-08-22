#ifndef host_bindings_h
#define host_bindings_h

#include <emscripten/bind.h>
#include "Name.h"
#include "Greeter.h"

Greeter* castToGreeter(uintptr_t ptr) {
    return reinterpret_cast<Greeter*>(ptr);
}

EMSCRIPTEN_BINDINGS(interop)
{
    emscripten::class_<Name>("Name")
        .constructor<std::string, std::string>()
        .function("getFirst", &Name::getFirst)
        .function("getLast", &Name::getLast);
    emscripten::class_<Greeter>("Greeter")
        .function("greet", &Greeter::greet);
    emscripten::function("createGreeter", &castToGreeter, emscripten::allow_raw_pointers());
}

#endif /* host_bindings_h */
