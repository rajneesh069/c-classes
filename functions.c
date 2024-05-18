#include <stdio.h>

int sum(int, int); // declaration
int subtract(int a, int b)
{ // declaration + definition
    return b - a;
}
// escape characters :-
// \n -> enter button daba di hai -> prints a new line
// \t -> tab button daba di hai -> gives a space of 4(generally)

int main()
{
    printf("%d\t", sum(2, 3));
    printf("%d", subtract(2, 3));
    return 0;
}

int sum(int a, int b) // definition
{
    return a + b;
}