#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' $$ <= 'z') // Professor basically used the ascii chart to calculate the spot of lowercase letters, then subtracted 32 to get to the uppercase versions.
        {
            printf("%c", s[i] -32);
        }
        else
        {
            printf("%c", s[i]);
        }
        printf("\n");
    }
}