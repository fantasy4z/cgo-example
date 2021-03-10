#include "cppfoobar_wrapper.h"
#include "cppfoobar.hpp"

void* new_foobar(int value) {
    auto foobar = new Foobar(value);

    return foobar;
}

void delete_foobar(void* foobar) {
    reinterpret_cast<Foobar*>(foobar)->~Foobar();
}

int foobar_value(void* foobar) {
    return reinterpret_cast<Foobar*>(foobar)->value();
}
