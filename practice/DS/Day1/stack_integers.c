#include<stdio.h>
#define MAX 5
int info[MAX];
int top;
/* Function declarations*/
void init(); // to initialize the stack
int isfull(); //to check if the stack is full
int isempty(); //to check if the stack is empty
void push(int); //to add the element to stack
void pop(); //to delete the element from stack
int peek(); //get the top element without deleting
int main(void) 
{
	int choice,value,i;
	init();
	do
	{
		printf("\n0.exit\n1.push\n2.pop\nenter choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					if(isfull())
						printf("stack is full\n");
					else
					{
						printf("\n enter the value to push");
						scanf("%d",&value);
						push(value);
						printf("\nvalue is pushed");
						for(i=0;i<MAX;i++)
						{
							printf("\n%d",info[i]);
						}
					}
				}
				break; //end of case 1
			case 2:
				{
					if(isempty())
						printf("\n the stack is empty");
					else
					{
						value=peek();
						pop();
						printf("\n value poped");
						for(i=0;i<MAX;i++)
						for(i=0;i<MAX;i++)
						{
							printf("\n%d",info[i]);
						}
					}
				} break;//end of case 2
		}//end of switch
	}while(choice!=0);//end of do while

	return 0;
}
//function definition
void init()
{
	int i;
	top=-1;
	for(i=0;i<MAX;i++)
	{
		info[i]=-1;
	}
}//end of function def init

int isfull()
{
	if(top == MAX-1)
	{
		return 1; //stack is not full
	}
	else
	{
		return 0; //stack is full
	}
}//end of function def isfull
int isempty()
{
	if(top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}// end of function def isempty()
 void push(int data)
{
	top =top+1;
	info[top]=data;
	
}//end of function def push(int)
void pop()
{
	info[top]=-1;
	top =top-1;
}// end of function def void pop()
int peek()
{
	return info[top];
}//end of function def peek()
