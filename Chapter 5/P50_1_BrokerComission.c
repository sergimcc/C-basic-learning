#include <stdio.h>
int main (void)
{
    printf ("***************************Let's calculate your comission***************************\n");
    float TradeAmount, comission;
    printf ("Enter the trade amount in $: ");
    scanf ("%f", &TradeAmount);
    if (TradeAmount < 2500 )  
        comission = 30 + 0.017 * TradeAmount;
        else 
            if (TradeAmount >= 2500 && TradeAmount <= 6250)  
                comission = 56 + 0.0066 * TradeAmount;
                else 
                    if (TradeAmount > 6250 && TradeAmount <= 20000 )  
                        comission = 76 + 0.0034 * TradeAmount;
                        else
                            if (TradeAmount > 20000 && TradeAmount <= 50000 )  
                                comission = 100 + 0.0022 * TradeAmount;
                                else 
                                    if (TradeAmount > 50000 && TradeAmount <= 500000 )  
                                        comission = 155 + 0.0011 * TradeAmount;
                                        else 
                                            comission = 255 + 0.0009 * TradeAmount;
    printf ("Your Comission is: %.2f $ \n", comission);
    return 0;
}