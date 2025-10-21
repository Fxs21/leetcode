#ifndef __PRINT_GENERIC_H__
#define __PRINT_GENERIC_H__

#include <stdio.h>

/* ANSI color code */
#define BLUE_TEXT  "\x1B[34m"
#define GREEN_TEXT "\x1B[32m"
#define RESET      "\x1B[0m"

void print_int(const char* expr, int x);
void print_double(const char* expr, double x);

#define print(X) _Generic((X), \
    int:    print_int,         \
    float:  print_double,      \
    double: print_double       \
)(#X, X)

#endif
