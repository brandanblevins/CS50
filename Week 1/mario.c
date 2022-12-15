#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1); // This loop will run as long as under 1, but will break out of loop once over 1.
    for (int i = 0; i < 4; i++)
    {
        printf("");
    }
    printf("\n");
}