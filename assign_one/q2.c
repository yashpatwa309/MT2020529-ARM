//Find largest of array of 15 numbers

#include<stdio.h>

int main()
{
    int a[15];
    int max, i;
    
    printf("Enter 15 integers : \n");
    for(i=0; i<15; i++)
        scanf("%d", &a[i]);

    max = a[0];

    for(i=1; i<15; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    printf("The largest element of the array is : %d ", max);

    return 0;

}