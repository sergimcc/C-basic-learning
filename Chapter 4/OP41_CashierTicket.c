#include <stdio.h>
int main (void)
{
   printf("Let's make your receipt:\n");
   int itemnum1, itemnum2, itemnum3;
   printf("Enter the number of the items you've bought (max 3 formated num, num, ...): \n");
   scanf("%d, %d, %d", &itemnum1, &itemnum2, &itemnum3);
   float pitem1, pitem2, pitem3;
   printf("Now, enter the price of each item (max 3 formated price, price ... in order): \n");
   scanf("%f, %f, %f", &pitem1, &pitem2, &pitem3);
   float subtotal = pitem1 + pitem2 + pitem3;
   #define TAX 0.21f
   float finalprice = subtotal - subtotal * TAX;
   printf("\t \t Here's your receipt: \n");
   printf("\t Items bought: \n" );
   printf ("Item Num: \t Item Price: \n");
   printf("%-15d %15.2f \n", itemnum1, pitem1);
   printf("%-15d %15.2f \n", itemnum2, pitem2);
   printf("%-15d %15.2f \n", itemnum3, pitem3);
   printf("Tax (IVA) = 21%% \n");
   printf("Total to pay: %.2f\n", finalprice);
   return 0;
}