#include <stdio.h>
#include <stdlib.h> // Required for rand()
#include <time.h>   // Required for srand()

int main() 
{
    int dwn, itr;

    // Ask for input first before using the variables
    printf("Input lower bound number: ");
    scanf("%d", &dwn);
    printf("Input number of iterations: ");
    scanf("%d", &itr);

    // Ensure `itr` is not zero to avoid division by zero
    if (itr == 0) {
        printf("Error: Number of iterations must be greater than 0.\n");
        return 1;
    }

    // Compute the upper bound
    int upper_bound = (itr % 6) + dwn;  // Upper bound = (itr % 6) + dwn

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Loop to print 100 random numbers
    for (int i = 0; i < 100; i++) 
    {
        // Random number will be between lower bound and upper bound
        int random_num = rand() % (upper_bound - dwn + 1) + dwn;
        printf("%d:%d\n", i + 1, random_num);
    }

    return 0;
}