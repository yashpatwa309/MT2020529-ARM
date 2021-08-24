//Find greateest of three numbers

#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three distinct integers : \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b)
    {
        if(a > c) 
            printf("a=%d is the largest of the three numbers", a);
        else
            printf("c=%d is the largest of the three numbers", c);
    }
 
    else
    {
        if(b > c) 
            printf("b=%d is the largest of the three numbers", b);
        else
            printf("c=%d is the largest of the three numbers", c);
    }

return 0;

}
