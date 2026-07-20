#include <stdio.h>
int main (void)
{
int leftdigit, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, secondfive;
printf("Let's discover the Check Digit of your UPC!\n");
printf("Write the first digit in the left of your code : \n");
scanf("%d", &leftdigit);
printf("Perfect, now write the first group of five digits from left to right in the form X X X... of your code: \n");
scanf("%d %d %d %d %d", &num2, &num3, &num4, &num5, &num6);
printf("Awesome, now write the last group of five digits from left to right in the form X X X... of your code \n");
scanf("%d %d %d %d %d", &num7, &num8, &num9, &num10, &num11);
int firstadd = leftdigit + num3 + num5 + num7 + num9 + num11;
int secondadd = num2 + num4 + num6 + num8 + num10;
int multiplyandadd = firstadd * 3 + secondadd;
int firstsubstract = 9 - (multiplyandadd - 1) % 10;
printf("The Check Digit of your UPC is: %d \n", firstsubstract);
}