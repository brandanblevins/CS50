#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("meow\n");
    printf("meow\n");
    printf("meow\n");
}

// Better version.

int i = 0;
while (i < 3)
{
    printf("meow\n");
    i++;
}

// Another version.

for (int i = 0; i < 3; i++)
{
    printf("meow\n");
}
