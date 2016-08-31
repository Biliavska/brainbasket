#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void) {
    
    float amount;
    
    int change, coins = 0;
    
    printf("Give me the amount of change\n");
    
    do {
        
        amount = GetFloat();
        
    } while (amount <= 0);
    
    change = round (amount*100);
    
    coins += change / 25;
    change %= 25;
    
    coins += change / 10;
    change %= 10;
    
    coins += change / 5;
    change %= 5;
    
    coins += change;
    
    printf("%d\n", coins);
    
        return 0;
}