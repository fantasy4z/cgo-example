#include <iostream>

#include "cppfoobar.hpp"

Foobar::Foobar(int value) : m_value(value) {
    std::cout << "Foobar constructor, value: " << m_value  << std::endl;
}

Foobar::~Foobar() {
    std::cout << "Foobar destructor, value: " << m_value  << std::endl;
}

int Foobar::value() const {
  return m_value;
}