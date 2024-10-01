#include <stdio.h>

int main(){
    int a; int b; int c;

    printf("Enter marks in subject a: ");
    scanf("%d", &a);
    printf("Enter marks in subject b: ");
    scanf("%d", &b);
    printf("Enter marks in subject c: ");
    scanf("%d", &c);

    if (a<33 || b<33 || c<33)
    {
        printf("You failed in exam due to low marks in indiviual subjects");
    }
    else if ((a + b + c)/3 < 40 )
    {
        printf("You failed in exam due to low total percentage");
    }
    else
    {
        printf("Congratulations you passed the exam succesfully!");
    }
    
    return 0;
}