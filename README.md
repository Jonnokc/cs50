# cs50
CS50
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)



{


float x;




do 
{
    
    printf("O hai! How much change is owed? ");
    x = GetFloat();
    printf("I am the raw amount: %f\n", x);
        
} while (x < 0); 
    
    
int q;
float r;
int coins;
float z;
float t = x * 100;
int b = round(t);
int i = b;

    
    
    
printf("test: %d\n\n", b); 
    
    
    

        
         
   
        while (i>= 25)
            {
                
                q = i / 25;
                r = q * 25;
                i = i - r;
                coins = q;
                    
                printf("money removed from quarters: %f\n", r);
                printf("How many quarters: %d\n", q);
                printf("money left after quarters: %d\n", i);
                printf("coins at quarter: %d\n\n", coins);
                
            }
 
        while(i >= 10)
            {
            
                q = (i / 10);
                r = q * 10;
                i = i - r;
                coins = coins + q;
                printf("money removed from dimes: %f\n", r);
                printf("How many dimes: %d\n", q);
                printf("money left after dimes: %d\n", i);
                printf("coins at dimes: %d\n\n", coins);
            
            }
    
        while(i >= 05)
            {
            
                q = (i / 05);
                r = q * 05;
                i = i - r;
                coins = coins + q;
                printf("money removed from nickels: %f\n", r);
                printf("How many nickels: %d\n", q);
                printf("money left after nickels: %d\n", i);
                printf("coins at nickels: %d\n\n", coins);
            
            }
        while (i > 0.00)
            {
                
                z = (i / 1) * 1;
                r = q * 1;
                coins = roundf(coins + z);
                printf("money removed from pennies: %f\n", r);
                printf("How many pennies: %f\n", z);
                printf("money left after pennies: %d\n", i); 
                printf("coins at pennies: %d\n\n", coins);
                i = 0;
            
            }
            
       printf("%d\n", coins);     
}


