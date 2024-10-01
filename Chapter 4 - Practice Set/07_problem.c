#include <stdio.h>

int main()
{
    int n = 10, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * 8;
    };
    printf("The sum is %d", sum);
    return 0;
}