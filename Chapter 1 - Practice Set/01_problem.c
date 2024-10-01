#include <stdio.h>

int main(){
    // int length = 3;
    // int breadth = 5;

    int length, breadth;

    printf("Enter the value of length of the rectangle\n");
    scanf("%d", &length);

    printf("Enter the value of breadth of the rectangle\n");
    scanf("%d", &breadth);

    printf("This is the area of the given triangle %d unit sq", length*breadth);
    return 0;
}