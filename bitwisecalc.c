#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Author: Justyn Butville
Date: 01/27/2025
Assignment: In-Class Exercise: Bitwise Calculator
Refrence: None
*/
int main()
{
int random, a, b;
int input;
int nextinput;
for (int currentIndex = 0; currentIndex < 1; currentIndex++)
{
    printf("This is a bitwise calculator, please input your integer number: ");
    scanf("%d", &a);
    printf("Now input your shift number: ");
    scanf("%d", &b);
    printf("Now, for your bitwise calculation, please input 1 for AND, 2 for OR, 3 for XOR, or 4 for Bit Shift: ");
    scanf("%d", &input);

    if (input == 1)
    {
        printf("Generated number: %d\n", a & b);
    }
    
    if (input == 2)
    {
        printf("Generated number: %d\n", a | b);
    }
    
    if (input == 3)
    {
        printf("Generated number: %d\n", a ^ b);
    }
    
    if (input == 4)
    {
        printf("Type 1 to shift left, 2 to shift right: ");
        scanf("%d", &nextinput);
        if (nextinput == 1)
        {
             printf("Generated number: %d\n", a << b);
        }
        if (nextinput == 2)
        {
             printf("Generated number: %d\n", a >> b);
        }
    }
}
return 0;
}