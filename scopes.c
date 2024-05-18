#include <stdio.h> // printf, scanf

int sum(int, int); // declaration
// sum(2,3) = 5;

int koyena = 100; // global variable

int main()
{
    int koyena = -900; // local variable for fn main
    {
        int koyena = 900;                                           // local variable
        printf("Koyena inside the block in main fn: %d\n", koyena); // 900
        printf("%d\n", sum(2, 3));                                  // sum(2,3)= 1
    }
    printf("Koyena outside the block but in the main fn: %d\n", koyena); // -900
    // printf("%d", ans);
    return 0;
}

int sum(int a, int b) // definition
{
    int Rajneesh = 69;                                  // local variable for sum
    printf("Koyena variable inside sum: %d\n", koyena); // 100
    return b - a;                                       // 1
}
