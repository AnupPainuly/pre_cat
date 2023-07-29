#include<stdio.h>
#define SIZE 5
#define True 1 
#define False 0
typedef int Bool;
typedef enum menu_choice{Exit_Program,Add_Element,Delete_Element,Glance_Element} menu;
int arr[SIZE];
int front=-1, rear=-1;
Bool is_empty()
{
 return (front==-1 && rear==-1) ? True : False;
}//end of is_empty func
int is_full()
{
  return (rear==SIZE-1)? True: False;
}//end of is_full func
void enqueue(int x)
{
 if(is_full()==True) 
 {
   printf("\n The queue is in overflow state");
   return;
 }
 else if(is_empty()==True)
 {
   front=rear=0;
 }
 else 
 {
   rear = rear+1;
 }
 arr[rear]=x;
}//end of enqueue func
void dequeue()
{
 if(is_empty()==True)
 {
   printf("\n The queue is in underflow state");
   return;
 }
 else if(front == rear){
   front = rear= -1;
 }
 else{
   front =front+1;
 }
}//end of the dequeue func
void peek()
 {
   if (is_empty()==True){
     printf("\n Can not peek in underflow state");
     return;
   } 
     printf("Element at the front is %d",arr[front]);
 }//end of peek func
void print_queue(int x)
{
  int i;
  for(i=x;i<=(SIZE-1);i++)
   {
     printf("%d ",arr[i]);
   }//end of for loop
}//end of show_queue func
int menu_func()
{
  int temp;
  menu choice;
  printf("\nEnter your choice\n0.Exit\n1.Enqueue\n2.Dequeue\n3.Peek\n");
  scanf("%d",&temp);
  choice=(menu)temp;
  return choice;

}
int main(void)
{
  menu choice;
  int x,keepgoing=1;
  //while((choice=menu_func())!=stp)// an aleternatieve to while
  while(keepgoing)
  {
  choice=menu_func();
  switch(choice)
  {
    case Add_Element:{
              printf("\n Enter the value to be enqueued");
              scanf("%d",&x);
              enqueue(x);
              print_queue(front);
            };break;
    case Delete_Element:{
              dequeue();
              print_queue(front);
            };break;
    case Glance_Element:{
                peek();
              };break;
    case Exit_Program:return 0;break;
    default:{ printf("Invalid Input");};break;
  }//end of switch
  }//end of while
  return 0;
}//end of main()
