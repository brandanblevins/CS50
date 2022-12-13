#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to agree.
    char c = get_char("Do you agree? ");

    // Check whether user agreed.
    if (c == 'y' || c == 'Y') // || substitutes for or.
    {
        printf("Agreed.\n");
    }
    else if (c == 'n')
    {  
        printf("Not agreed.\n");
    }
}