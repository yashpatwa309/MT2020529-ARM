//Sort the given array in ascending order

#include<stdio.h>

int main()
{
    int a[20];
    int i, j, temp;
    
    printf("Enter 20 integers : \n");

    for(i=0; i<20; i++)
        scanf("%d", &a[i]);

    for(i=0; i<19; ++i)
    {
        for(j=0; j<(19-i); ++j)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Sorted array : \n");

     for(i=0; i<20; i++)
        printf("%d ", a[i]);

    return 0;
    
}