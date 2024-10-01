#include <stdio.h>

int main(){
    int a;

    scanf("%d", &a);

    if (a%5==0)
    {
        printf("Your age is divisible by 5\n");
    }
    if (a>10)
    {
        printf("Your age is greater than 10");
    };

    return 0;
}