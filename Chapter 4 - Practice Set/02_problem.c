#include <stdio.h>

int main(){
    printf("The multiplication table of 10 in reverse is as follows: \n");
    for (int i = 10; i >= 1; i--)
    {
        printf("10 * %d = %d\n", i, i*10);
    };
    
    return 0;
}