#include <stdio.h>

int main()
{
    int a, product = 1;
    printf("Enter the number: ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        product *= i;
    };
    printf("Factorial of %d is %d", a, product);

    return 0;
}