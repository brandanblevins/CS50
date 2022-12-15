#include <cs50.h>
#include <stdio.h>

int get_cents(); // I removed void and it still seems to work. Also, these are the 5 functions I need to define.
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25; // Each of these calculations feeds into the other functions, and basically tells them how much change is left.

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins); // If I want to add text, do so within the string.
}

int get_cents(void)
{
    int cents;
    do {
        cents = get_int("How many cents are owed: "); // This prompts the customer for the amount of cents that are owed.
    }
    while (cents < 0); // Continue to prompt the customer for the cents owed until a positive integer is entered.
    return cents; // Established cents as the answer to get_int in this function.
}

int calculate_quarters(int cents)
{
    int quarters = 0; // Establish quarters as a variable.
    while(cents >= 25) // Set the rules for this while loop to run. This integer is coming from the main function.
    {
        cents = cents - 25; // Update the value of the cents variable.
        quarters++; // Every time the above line runs successfully, add a quarter to the count.
    }
    return quarters; // Output the number of quarters based on the established logic.
}

int calculate_dimes(int cents) // Same logic as quarters, with adjusted figures.
{
    int dimes = 0; // Establish dimes as a variable.
    while(cents >= 10)
    {
        cents = cents - 10;
        dimes++;
    }
    return dimes;
}

int calculate_nickels(int cents) // Same logic as quarters, with adjusted figures.
{
    int nickels = 0; // Establish nickels as a variable.
    while(cents >= 5)
    {
        cents = cents - 5;
        nickels++;
    }
    return nickels;
}

int calculate_pennies(int cents) // Same logic as quarters, with adjusted figures.
{
    int pennies = 0; // Establish pennies as a variable.
    while(cents >= 1)
    {
        cents = cents - 1;
        pennies++;
    }
    return pennies;
}
