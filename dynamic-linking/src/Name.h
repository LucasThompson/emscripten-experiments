//
// Created by Lucas Thompson on 22/08/2016.
//

#ifndef EMSCRIPTENMODULEINTEROPHELLOWORLD_NAME_H
#define EMSCRIPTENMODULEINTEROPHELLOWORLD_NAME_H


#include <string>

class Name {
public:
    Name(std::string first, std::string last) : m_first(first), m_last(last) {}
    std::string getFirst() const { return m_first; }
    std::string getLast()const { return m_last; }
private:
    std::string m_first;
    std::string m_last;
};

#endif //EMSCRIPTENMODULEINTEROPHELLOWORLD_NAME_H
