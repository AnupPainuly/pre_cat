//linked list: Inserting a node at the beginning
#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
};//declaration of structure called node
struct node *ptr_head =NULL;//decalaring and intializing the head of the linked list
void insert(int x)
{
  struct node *temp =(struct node *) malloc(sizeof(struct node));
  temp->data =x;
  temp->next =ptr_head;
  ptr_head=temp;
}
void print()
{
  struct node *temp =ptr_head;
  printf("\nThe list is: ");
  while(temp !=NULL)
  {
    printf("%d",temp->data);
    temp=temp->next;
  }
  printf("\n");
}
int main(void)
{
  int i,n,x;
  printf("\nEnter the number of elements in the list:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\nEnter the element:");
    scanf("%d",&x);
    insert(x);
    print();
  }
  return 0;
}
