#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int mine = 2; // const = constant = means it won't change later
    int points = get_int("How many points did you lose? ");

    if (points < mine)
    {
        printf("You lost fewer points than me.\n");
    }
    else
    {
        printf("You lost more points than me.\n");
    }
}