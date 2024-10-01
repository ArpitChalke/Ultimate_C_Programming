#include <stdio.h>

int main(){
    int i = 75;
    int* j = &i; // j is a pointer pointing to i (j is an integer pointer)

    printf("The address of i is %p\n", &i);
    printf("The address of i is %u\n", &i); // decoded address with only numbers
    printf("The address of i is %p\n", j);

    printf("The value at address j is %d\n", *(&i));

    // Note: 
    // & point the address of the value
    // * points the value on the address
    // * and & cancels each other when used together
    
    return 0;
}