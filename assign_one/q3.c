//Find number of even numbers in the given array

#include<stdio.h>

int main()
{
    int a[20];
    int count = 0, i;
    
    printf("Enter 20 integers : \n");
    for(i=0; i<20; i++)
        scanf("%d", &a[i]);

    for(i=0; i<20; i++)
    {
        if(a[i]%2 == 0)
            count ++;        
    }

    printf("\nNumber of even numbers in the given array are %d", count);

    return 0;
}


    