// Correct version.

#include <stdio.h>
#include <cs50.h>

bool valid_triangle(float x, float y, float z);

bool valid_triangle(float x, float y, float z)
{
    // Check for all positive sides.
    if (x <= 0 || y <= 0 || z <= 0)
    {
        return false;
    }

    // Check the sum of any two sides greater than third.
    if ((x + y <= z) || (x + z <= y) || (y + z <= x))
    {
        return false;
    }

    // If we passed both tests, we are good!
    return true;
}


// My attempt at the valid triangle exercise.

#include <stdio.h>
#include <cs50.h>

bool valid_triangle();
bool check_sides();

bool main(void)
{
    int side_1 = get_int("Give me the first side: ");
    int side_2 = get_int("Give me the second side: ");
    int side_3 = get_int("Give me the third side: ");

    bool valid_triangle;

    if (valid-triangle = true);
    {
        printf("This is a valid triangle!!\n");
    } else {
        printf("This is not a valid triangle!\n");
    }
}

bool check_sides();
{

}