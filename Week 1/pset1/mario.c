#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do // This prompts the user for the width.
    {
        n = get_int("Width: ");
    }
    while (n < 1 || n > 8); // This loop will go back to 'do' as long as as under 1 or over 8, which sets the number range for accepted input.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < n - 1)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}