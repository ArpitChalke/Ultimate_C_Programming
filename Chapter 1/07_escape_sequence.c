#include <stdio.h>

int main(){
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n';
    printf("This the value of a is %c", ch);
    printf("This the escape \" sequence \n");
    printf("This the escape \' sequence \n");
    printf("This the escape \\n sequence \n");
    return 0;
}