//Simple queue

#include <stdio.h>

int SIZE = 10;
int queue[SIZE];
int start = -1, end = -1;

void add_to_queue(int);
void remove_from_queue();
void print();

int main()
{
   int choice, data;
   while(1) 
   {
     printf("\nEnter your choice: \n 1. ADD\n 2. REMOVE\n 3. PRINT\n");
     scanf("%d", &choice);

     switch(choice)
     {
        case 1:
        	printf("\nEnter the element you wish to add to the queue\n");
        	scanf(" %d", &data);
        	add_to_queue(data);
        	break;
     
      	case 2: 
		      remove_from_queue();
		      break;

	      case 3: 
		      print();
		      break;

	      default:
		      printf("\n Wrong choice!!");
		      break;
     }

   return 0;

}

void add_to_queue(int data)
{
    if (end == SIZE - 1)
   	 printf("\nQueue is Full!!");
  
    else
    {
         if (start == -1)
             start = 0;
         end++;
         queue[end] = data;
    }
}

void remove_from_queue() 
{
    if (start == -1)
    	printf("\nQueue is Empty!!");
	  
    else 
    {
    	printf("\nDeleted element : %d", queue[start]);
        start++;
        if (start > end)
     	     start = end = -1;
    }
}

void print() 
{
    if (end == -1)
    	printf("\nQueue is Empty!!");

    else 
    {
    	int i;
        printf("\nQueue elements are:\n");
        for (i = start; i <= end; i++)
        	printf("%d  ", queue[i]);
    }

    printf("\n");
}
