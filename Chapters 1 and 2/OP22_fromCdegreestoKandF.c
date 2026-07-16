#include <stdio.h>
int main (void)
{
    printf("*********************************************************** \n");
    printf("Temperature from Celsius to Fahrenheit and Kelvin convertor \n");
    printf("*********************************************************** \n");
    float celsius;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    #define FAHRENHEIT (celsius * 9/5) + 32
    #define KELVIN (celsius + 273.15)
    float fahrenheit = FAHRENHEIT;
    float kelvin = KELVIN;
    printf("The temperature in Fahrenheit is: %f F\n", fahrenheit);
    printf("The temperature in Kelvin is: %f K\n", kelvin);
    int rating;
    printf("Please rate the conversion (1-10): ");
    scanf("%d", &rating);
    printf("You rated the conversion %d/10, thanks for the feedback!\n", rating);
    return 0;
}