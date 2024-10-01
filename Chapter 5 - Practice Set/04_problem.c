#include <stdio.h>

int fibonacci(int);

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return (n - 1);
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
};

int main()
{
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
    // fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);

    int n = 7;
    fibonacci(n);
    printf("The value of fiboacchi series at %d is %d", n, fibonacci(n));

    return 0;
}