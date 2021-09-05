//Empty ascending stack

#include <stdio.h>

int SIZE = 10;       
int head = 0;
int stack[10];       

int push(int);
int pop();
int print(); 

int main()
{
   int choice, data;
   while(1) 
   {
     printf("\nEnter your choice: \n 1. PUSH\n 2. POP\n 3. PRINT\n");
     scanf("%d", &choice);

     switch(choice)
     {
        case 1:
        	printf("\nEnter the element you wish to add to the stack \n");
        	scanf(" %d", &data);
        	push(data);
        	break;
     
	      case 2: 
		      pop();
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

int push(int data) 
{
   if(!(head == SIZE)) 
   {
	stack[head] = data;
	head = head + 1;               
   } 
   else 
   {
      printf("Stack is full\n");
   }
}            

int pop() 
{
   int data;
	
   if(!(head == 0)) 
   {
      data = stack[head - 1];
      head = head - 1;   
      printf("Element removed : %d \n", data);
   } 
   else
   {
      printf("Stack is empty\n");
   }

}

int print()
{
   int i;
   printf("Element at the head of the stack: %d\n" ,stack[head]);
   printf("Elements: \n"); 
   for(i=head-1; i>=0; i--)
      printf("%d\n", stack[i]);
}
