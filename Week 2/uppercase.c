#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int = 0, n = strlen(s); i < n; i++)
    {
        if (islower(s[i])) // Professor basically used the ascii chart to calculate the spot of lowercase letters, then subtracted 32 to get to the uppercase versions.
        {
            printf("%c", toupper(s[i]);
        }
        else
        {
            printf("%c", s[i]);
        }
        printf("\n");
    }
}