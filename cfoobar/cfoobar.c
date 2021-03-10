#include <stdio.h>

const char * print_and_get_hello_world() {
    char *message = "hello world";

    printf("Called printf: %s\n", message);

    return message;
}
