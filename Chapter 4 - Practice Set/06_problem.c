#include <stdio.h>

int main()
{
    int n = 0, i = 0;
    // for (int i = 0; i <= 10; i++)
    // {
    //     n = n + i;
    //     printf("%d\n", n);
    // };

    do
    {
        n = n + i;
        printf("%d\n", n);
        i++;
    } while (i <= 10);

    return 0;
}