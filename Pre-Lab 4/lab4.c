#include<stdio.h>
#include<math.h>
int main(void)
{
    //Get the user input of 'limit'
    int limit;
    printf("Please enter a limit: ");
    scanf("%d", &limit);

    //Loop through every perfect cube up to the final value
    int i, result, cube, test;
    char div;
    cube = 0;
    i = 0;
    while(cube < limit)
    {
        cube = pow(i, 3);   //Get i^3
        i++;

        //Use ternary operator to determine if the cube is above limit
        result = (cube <= limit) ? (cube) : (0);
        //determine if divisible by 3
        div = (result % 3 == 0) ? ('*') : (' ');
        printf("%d%c\n", result, div);
        

        //Used to see if the next time the loop iterates if it will return -1
        test = pow(i, 3);
        test = (test <= limit) ? (test) : (-1);
        switch(test)
        {
            case -1:
                i++;
                cube = pow(i, 3);
                break;
        }
    }
      
    
    

}
