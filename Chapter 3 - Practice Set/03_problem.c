#include <stdio.h>

int main(){
    int income;
    float tax;
    printf("Enter your income: ");
    scanf("%d", &income);
    // printf("Enter your salary: ");
    // scanf("%d", &salary);
    // int income = salary * 12;
    if (income<250000)
    {
        tax = 0.0;
    }
    else if (income>250000 && income<=500000)
    {
        tax = 0.05 * (income-250000); 
    }
    else if (income>500000 && income<=1000000)
    {
        tax = 0.05 * (500000-250000) + 0.20 * (income - 500000); 
    }
    else
    {
        tax = 0.05 * (500000-250000) + 0.20 * (1000000 - 500000) + 0.3 * (income-100000); 
    }
    printf("Your tax is %.2f on your income of %d\n", tax, income);
    printf("And you have to pay %.2f tax every month\n", tax/12);
    // %.2f denotes that the variable should print only two digits after the decimal point
    return 0;
}