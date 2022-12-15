#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
    printf("hello, %s\n", argv[1]); // argv[] is picking out the word in order of it being input?
    }
    else
    {
        printf("hello, world\n");
    }
}