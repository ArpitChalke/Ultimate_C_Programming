#include <stdio.h>

int main()
{
    char i = "A";
    char *j = &i;

    float k = 5.765;
    float *k1 = &k;

    printf("The address of the i is %p\n", &i);
    printf("The address of the i is %p\n", j);
    printf("The address of the k is %p\n", k1);

    return 0;
}