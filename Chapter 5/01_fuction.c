#include <stdio.h>

// Fuction Prototype
int sum(int, int);

// Fuction Defination
int sum(int x, int y)
{
    printf("Sum is %d\n", x + y);
    return x + y;
};

int main()
{
    int a = 5, b = 15;
    sum(a, b);

    int a1 = 12;
    int b1 = 23;

    // int c1 = a1 + b1;
    // printf("The sum is %d\n", c1);
    int c1 = sum(a1, b1); // Function call
    printf("%d\n", c1);

    return 0;
}