// This example shows how a lack of using 'break' can be useful.

int x = GetInt();
switch(x)
{
    case 5:
        printf("Five, ");
    case 4:
            printf("Four, ");
    case 3:
        printf("Three, ");
    case 2:
        printf("Two, ");
    case 1:
        printf("One, ");
    default:
            printf("Blast-off!\n");
}