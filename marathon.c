/* Code to convert miles to kilometers*/
#include <stdio.h>

int main(void)
{
    int miles, yards;
    double kilometers;
    printf("Input miles and yards as integers\n");
    scanf("%d%d", &miles, &yards);
    kilometers = 1.609*(miles+yards/1760.0);
    printf("\nA marathon is %lf kilometers long\n",kilometers);
    return 0;
}