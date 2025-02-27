#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

/*
Filename: funcbin.c
Author: Justyn Butville
Date: 02/010/2025
Assignemnt: Functional Binary Helper Tool
Recources: None
*/
int main()
{
    int a, b, c, d, e;
     printf("Greetings! I am Bin, your binary helper tool! I can take any valid two imputs, and preform bitwise binary operations on the numbers for you!\n");
     sleep(2);
 while (true)
 {
     printf("Please input your first number, this number will be the number we preform the operation on: ");
     scanf("%d", &a);
     printf("Please insert your second number, this will be your number of shifts: ");
     scanf("%d", &b);
     
     printf("Your two iterations have been documented. Please select the operation you wish to preform on these numbers.\n ");
     printf("1. AND\n 2. OR\n 3. XOR\n 4. 2's Complement\n");
     sleep(1);
     printf("Please type the corresponding number to the operation you wish to preform: ");
     scanf("%d", &c);
     
     if (c == 1)
     {
         printf("Here is your iterated number: %d\n", a && b);
         sleep(1);
         printf("Would you like to try another number?\n");
         printf("1. Yes\n2. No\n");
         printf("Select the corresponding number to the affirmative answers: ");
         scanf("%d", &d);
         if (d == 1)
         {
            printf("Okay, lets do another one!\n");
            sleep(1); 
         }
         if (d == 2)
         {
             printf("Thank you for using Bin, your binary helper tool, have a good day!\n");
             exit(2);
         }
     }
     
     if (c == 2)
     {
         printf("Here is your iterated number: %d\n", a || b);
         sleep(1);
         printf("Would you like to try another number?\n");
         printf("1. Yes\n2. No\n");
         printf("Select the corresponding number to the affirmative answers: ");
         scanf("%d", &d);
         if (d == 1)
         {
            printf("Okay, lets do another one!\n");
            sleep(1);
         }
         if (d == 2)
         {
             printf("Thank you for using Bin, your binary helper tool, have a good day!\n");
             exit(2);
         }
     }
     
     if (c == 3)
     {
         printf("Here is your iterated number: %d\n", a ^ b);
         sleep(1);
         printf("Would you like to try another number?\n");
         printf("1. Yes\n2. No\n");
         printf("Select the corresponding number to the affirmative answers: ");
         scanf("%d", &d);
         if (d == 1)
         {
             printf("Okay, lets do another one!\n");
             sleep(1);
         }
         if (d == 2)
         {
             printf("Thank you for using Bin, your binary helper tool, have a good day!\n");
             exit(2);
         }
     }
     
     if (c == 4)
     {
        printf("Which way would you like to shift?\n");
        printf("1. Left\n2. Right\n");
        printf("Select the corresponding number to the affirmative answers: ");
        scanf("%d", &e);
        if (e == 1)
        {
            printf("Here is your iterated number: %d\n", a << b);
         sleep(1);
         printf("Would you like to try another number?\n");
         printf("1. Yes\n2. No\n");
         printf("Select the corresponding number to the affirmative answers: ");
         scanf("%d", &d);
         if (d == 1)
         {
             printf("Okay, lets do another one!\n");
             sleep(1);
         }
         if (d == 2)
         {
             printf("Thank you for using Bin, your binary helper tool, have a good day!\n");
             exit(2);
         }
        }
        if (e == 2)
        {
            printf("Here is your iterated number: %d\n", a >> b);
         sleep(1);
         printf("Would you like to try another number?\n");
         printf("1. Yes\n2. No\n");
         printf("Select the corresponding number to the affirmative answers: ");
         scanf("%d", &d);
         if (d == 1)
         {
             printf("Okay, lets do another one!\n");
             sleep(1);
         }
         if (d == 2)
         {
             printf("Thank you for using Bin, your binary helper tool, have a good day!\n");
             exit(2);
         }
        }
         
     }
 }
 return 0;
}