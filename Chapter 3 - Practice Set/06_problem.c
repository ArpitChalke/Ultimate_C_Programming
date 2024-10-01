#include <stdio.h>

int main()
{
    int a = 1, b = 3, c = 21, d = 21;
    if (a > b && a > c && a > d)
    {
        printf("a is gretest of all");
    }
    else if (b > a && b > c && b > d)
    {
        printf("b is gretest of all");
    }
    else if (c > a && c > b && c > d)
    {
        printf("b is gretest of all");
    }
    else if (d > a && d > b && d > c)
    {
        printf("b is gretest of all");
    }
    else
    {
        printf("Error\n");
        printf("The greatest number might have been repeated\n");
        printf("Re enter the numbers");
    }

    return 0;
}