#include <stdio.h>

int main()
{
    int n = 15;
    for (int i = 0; i < n; i++)
    {
        if (i == 5)
        {
            // break; // Exits the loop now
            continue; // Skips the iteration
        };
        printf("%d\n", i);
    }
    printf("The loop is done");

    return 0;
}