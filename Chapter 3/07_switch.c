#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("You Entered 1");
        break;
    
    case 2:
        printf("You Entered 2");
        break;
    
    case 3:
        printf("You Entered 3");
        break;
    
    case 4:
        printf("You Entered 4");
        break;
    
    default:
        printf("You Entered a number greater than 4");
        break;
    }
    return 0;
}