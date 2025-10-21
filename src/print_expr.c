#include "print_expr.h"

void print_int(const char* expr, int x)
{
    printf(BLUE_TEXT "%s: " RESET GREEN_TEXT "%d" RESET "\n", expr, x);
}

void print_double(const char* expr, double x)
{
    printf(BLUE_TEXT "%s: " RESET GREEN_TEXT "%f" RESET "\n", expr, x);
}
