#include<stdio.h>
int linear_search(int farr[],int key)//function definition
{
  int i;
  for(i=0;i<5;i++)
  {
    if(farr[i] == key)
      return i;//takes control out of for loop
  }//end of for
  return -1;
}
int main(void)
{
  int arr[5]={1,2,3,4,5};
  int key,index;
  printf("\n enter the searching key:");
  scanf("%d",&key);
  index=linear_search(arr,key);//function call
  if(index == -1)
    printf("\n the key does not exist in the array");
  else
    printf("\n the key %d was found at index %d",key,index);
  return 0;
}
