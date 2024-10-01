#include <stdio.h>

int main(){
    char ch;
    // ch= 'A';
    printf("Enter the character: ");
    scanf("%c", &ch);
    printf("The given character is %c\n", ch);
    printf("The value of given character is %d\n", ch);
    if (ch >= 97 && ch <= 122)
    // The ASCII value of lower case letters is between 97 and 122
    {
        printf("The given character is lowercase\n");
    }
    else
    {
        printf("The given character is not lowercase\n");
    }
    
    return 0;
}