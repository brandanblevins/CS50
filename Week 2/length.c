#include <stdio.h>

int main(void)
{
    string name = get_string("Name: "); // This prompts the user to enter a name.

    int i = 0; // This established the i variable and sets it to 0.
    while (name[i] != \0) // A while loop. the \0 is the equivalent of \n, so a break.
    {
        i++; // Adds 1 to i every time the while loops.
    }
    printf("%i\n", i); // Prints i.
}