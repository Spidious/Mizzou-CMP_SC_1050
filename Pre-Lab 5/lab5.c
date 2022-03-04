#include<stdio.h>
int myPow(int x, int y)
{
    //raise and return
    switch (y)
    {
        case 0:
            x = 1;
            break;
        case 1:
            break;
        case 2:
            x = x*x;
            break;
        case 3:
            x = x*x*x;
            break;
        case 4:
            x = x*x*x*x;
            break;
        case 5:
            x = x*x*x*x*x;
            break;
    }
    return x;
}
int main (void)
{
    //Declare variables
    int x, y, z;

    //Ask for user input
    printf("gimme your fucking variable\n");
    scanf("%d", &x);
    printf("gimme your fucking power\n");
    scanf("%d", &y);

    //Call function and print
    z = myPow(x, y);
    printf("%d\n", z);
}