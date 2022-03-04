#include <stdio.h>
void PrintArray(int array[], int size)  //Print each element in an array
{
    for(int i = 0; i < size; i++)
    {
        if(array[i] == 0 && i != 0)
        {
            break;
        }
        printf("element [%d] = %d\n", i, array[i]);
    }
}
int InitializeArray(int array[], int begin, int end, int increment) //Initialize an array from 'begin' to 'end' by 'increment'
{
    int count = 0;
    int i = 0;
    for(int x = begin; x <= end; x += increment)
    {
        array[i] = x;
        i++;
        count ++;
    }
    return count;
}
int main(void)
{
    int myArray[265] = {0};
    printf("\nFIRST ARRAY\n");InitializeArray(myArray, 2, 20, 2);
    PrintArray(myArray, 256);
    printf("\nSECOND ARRAY\n");InitializeArray(myArray, 1, 97, 3);
    PrintArray(myArray, 256);
}
