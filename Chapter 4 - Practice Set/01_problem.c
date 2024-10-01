#include <stdio.h>

int main()
{
    int n = 10, a;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Table of %d is as follows: \n", a);
    for (int i = 1; i <= n; i++)
    {
        printf("%d * %d = %d\n", a, i, i * a);
    };

    return 0;
}