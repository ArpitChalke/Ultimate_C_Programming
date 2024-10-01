#include <stdio.h>

int main(){
    int a = 1; int b = a;
    int v = 3*3;
    char dt = '21 dec 2020'; // This is invalid is C

    printf("%d and %d\n", a , b);
    printf("The value of v is %d\n", v);
    printf("The value of dt is %d\n", dt);
    return 0;
}