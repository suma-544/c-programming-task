#include<stdio.h>

int main()
{
 float fahr, cel;
 printf("Enter the temperature in celsius: ");
 scanf("%f", &cel);

 fahr = (1.8 * cel) + 32.0;
 printf("\nTemperature in Fahrenheit: %.2f F\n", fahr);

 return 0;
}
