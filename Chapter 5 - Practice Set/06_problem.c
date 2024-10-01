#include <stdio.h>

int sum(int n){
    if (n == 0)
    {
        return 0;
    }
    return sum(n-1) + n;
    
}

int main(){
    int n = 5;
    printf("Value of sum of %d natural is %d", n, sum(n));
    return 0;
}