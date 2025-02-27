#include <stdio.h>
#include <unistd.h>

/*
Author: Justyn Butville
Date: 01/20/2025
Course: 2
Assignment: Engine Warm-Up Simulator
References: ChatGPT
*/

int main() {
    float ambienttemp = 0;
    float starttemp = 0;      
    float requiredtemp = 0;   
    float currenttemp = 0;    
    float warmrate = 0;
    float startingfuel = 0;  
    float fuel = 0;           
    float fuelburn = 2;       
    float timetodo = 0;       

    printf("Ambient Temperature: ");
    scanf("%f", &ambienttemp);

    starttemp = ambienttemp + 3;

    printf("Required Engine Temperature for Takeoff: ");
    scanf("%f", &requiredtemp);

    printf("Starting Fuel Amount: ");
    scanf("%f", &startingfuel);

    printf("Engine Warm Rate: ");
    scanf("%f", &warmrate);

    currenttemp = starttemp;
    fuel = startingfuel;

    printf("\nWarming up the engine...\n");
    while (currenttemp < requiredtemp) {
        if (fuel <= 0) {
            printf("Uh oh! the fuel has depleted before reaching required temp.\n");
            return 0; 
        }

        printf("Current Engine Temperature: %.1f\n", currenttemp);
        sleep(1); 
        currenttemp += warmrate;
        fuel -= fuelburn;        
        timetodo++;              
    }
    printf("\nThe engine has successfully warmed to %.1f degrees.\n", currenttemp);
    printf("Remaining fuel: %.1f gallons\n", fuel);
    printf("Elapsed time: %.1f seconds\n", timetodo);
    printf("Engine is ready for takeoff!\n");

    return 0;
}
