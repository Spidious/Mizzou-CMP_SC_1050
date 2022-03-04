#include<stdio.h>
main()
{
    int count = 1;
    char *state = "";

    while(count <= 10)
    {
        if(count % 2 == 0)
        {
            state = "even";
        }
        else
        {
            state = "odd";
        }
        
        printf("%4s - %2d\n",state , count);
        count++;
    }
}