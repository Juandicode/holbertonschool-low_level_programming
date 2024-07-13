#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>

int _putchar(char c);

void print_name(char *name, void (*f)(char *));

typedef long unsigned int size_t;

#endif /* FUNCTION_POINTERS_H */
