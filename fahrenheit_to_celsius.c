#include <stdio.h>

int main(void)
{
    int fahrenheit, celsius;
    printf("Enter the integer value of the temperature in Fahrenheit: ");
    scanf("%d",&fahrenheit);
    celsius = (fahrenheit-32)/1.8;
    printf("\nThe temperature in Celsius is: %d\n",celsius);
    return 0;
}