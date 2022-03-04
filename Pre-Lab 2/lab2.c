#include<stdio.h>
main()
{

    int x, y;

    //Get the numbers
    printf("Enter number separated by spaces:\n");
    scanf("%d %d", &x, &y);
    printf("\n*** INITIAL VALUES ***\nX = %d\nY = %d\n", x, y);
    
    //Print and calculate numbers
    printf("\n*** Calculated Numbers ***\nX times Y = %d\n", (x*y));
    printf("X divided by Y = %d\n", (x/y));
    printf("X plus 1, quantity times Y = %d\n", ((x+1)*y));

    //Print the initial numbers as they never changed
    printf("\n*** Final Values ***\nX = %d\nY = %d\n", x, y);

}
