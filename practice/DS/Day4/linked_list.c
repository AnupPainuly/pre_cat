//linked list: Inserting a node at the beginning
#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node * next;
};//node decalration
struct node * head;// decalaring the head of the linked list
void insert(int x)
{
  struct node *temp =(struct node *) malloc(sizeof(struct node));//creating a node dynamically using malloc
  (*temp).data = x;//alternatively this could be written using arrow operator as temp->data=x;
  (*temp).next = head;//next represents the address of next node.
  head=temp;
}
void print()
{
  struct node *temp =head;
  printf("The list is: ");
  while(temp !=NULL)
  {
    printf("%d ",temp->data);
    temp=temp->next; 
  }
  printf("\n");
}
int main(void)
{
  int i,n,x;
  head = NULL;//intializing the head to NULL denoting an empty list
  printf("\nEnter the number of elements in the list:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\nEnter the element:");
    scanf("%d",&x);
    insert(x);
    print();
    
  }
}
