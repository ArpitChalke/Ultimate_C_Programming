#include <stdio.h>

int main(){
    int i = 0;
    while (2 < 10)
    {
        //Don's run this loop as it is an example of infinity loop
        printf("The value of i is %d\n", i);
        i ++;
        //Don's run this loop as it is an example of infinity loop
    }
    
    return 0;
}