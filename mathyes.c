#include <stdio.h>

/*
*   File: mathyes.c
*   Author: Justyn Butville
*   Assignment: Homework 1
*   Date: 01/09/2025
*   Refrence: ChatGPT
*/

int main() {

    float numerator, denominator, answer;
    
    printf("Please give numerator: ", numerator);
    scanf("%f", &numerator);

    printf("Please give denominator:", denominator);
    scanf("%f", &denominator);

    if (denominator == 0) {
        printf("Error: Cannot divide by 0.\n");
        return 1;
    }

    answer = numerator / denominator;

    printf("Numerator: %.2f; Denominator: %.2f; Answer: %.2f\n", numerator, denominator, answer);
    return 0;
}