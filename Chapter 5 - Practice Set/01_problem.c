#include <stdio.h>

// Function declaration
float average(int, int, int);

// Function defination
float average(int x, int y, int z)
{
    printf("The average of %d, %d, %d is %f", x, y, z, (x + y + z) / 3.0);
    return (x + y + z) / 3.0;
}

int main()
{
    int a = 1, b = 3, c = 9;
    average(a, b, c);
    return 0;
}