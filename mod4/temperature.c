/*
 * =====================================================================================
 *
 *       Filename:  temperature.c
 *
 *    Description:  Program to calculate temperature
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:26:42 AM
 *       Revision:  none
 *       Compiler:  gcc temperature.c -o temperature
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
// Constants
#define CELSIUS 0
#define FAHRENHEIT 1
#define BOIL_CEL 100
#define BOIL_FAHR 212
#define FREEZE_CEL 0
#define FREEZE_FAHR 32

// Main Function
int main()
{
    double in_temp, out_temp;
    int choice;
    // 1) Ask user which temperature mode they want to use
    printf("Welcome to the temperature calculator\n");
    printf("Plese enter your choice:\n");
    printf("\t0 for Celsius or 1 for Fahrenheit: ");
    scanf("%d", &choice);
    // 2) Based on choice calculate Ceisius or Fahrenheit
    if(choice == CELSIUS)
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%lf", &in_temp);
        // Convert from Celsius to Fahrenheit
        out_temp = (in_temp * 9.0/5.0) + 32;
        printf("Your temperature in Fahrenheit is: %.2lf\n", out_temp);
    }
    else if (choice == FAHRENHEIT)
    {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf", &in_temp);
        // Convert from Fahrenheit to Celsius
        out_temp = (in_temp - 32) * 5.0/9.0;
        printf("Your temperature in Celsius is: %.2lf\n", out_temp);
    }
    else
    {
        printf("Sorry, you did not entered 0 or 1\nAdios amigo\n");
        return 0;
    }
    // Task 2: 
    // Test for boiling point, freezing point, and liquid point
    if(choice == CELSIUS)
    {
        if(in_temp >= BOIL_CEL)
        {
            printf("Your water is boiling\n");
        }
    }
    else   // FAHRENHEIT
    {
        if(in_temp >= BOIL_FAHR)
        {
            printf("Your water is boiling\n");
        }
    }


    return 0;
}
