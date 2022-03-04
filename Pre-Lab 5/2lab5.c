#include<stdio.h>
#include<math.h>
//This variant of the code opts to raise any base value to any power
int myPow(int a, int b)
{
    int x = a;

    if(b > 0)
    {
        for(int i = 1; i < b; i++)
        {
            x = x*a;
        }
        x = x;
    }
    else if(b<0)
    {
        for(int i = 1; i < b; i++)
        {
            x = x*a;
        }
        x = 1/x;
    }
    else if(b==0)
    {
        x = 1;
    }

    return x;
      
}
int main(void)
{
    int base, power, res;
    printf("Enter a base: ");
    scanf("%d", &base);

    printf("Enter a power: ");
    scanf("%d", &power);

    printf("Base = %d\nPower = %d\n", base, power);

    res = myPow(base, power);
    printf("Result = %d\n", res);
    res = pow(base, power);
    printf("Result = %d\n", res);

}

