#include <stdio.h>

int force(int);

int force(int mass){
    return mass*9.8;
}

int main(){
    int m = 45;
    printf("The force is %d", force(m));
    return 0;
}