#include <stdio.h>

int main()
{
    int n = 0, i = 0;
    while (i <= 10)
    {
        n = n + i;
        printf("%d\n", n);
        i++;
    };

    return 0;
}