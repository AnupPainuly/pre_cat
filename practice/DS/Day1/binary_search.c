#include<stdio.h>
int binary_search(int farr[],int key)
{
  int low,high,mid;
  low=0,high=4;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(farr[mid]==key)
      return mid;
    else if(farr[mid]>key)
      high =mid-1;
    else if(farr[mid]<key)
      low=mid+1;
  }
  return -1;
}
int main(void)
{
  int key,index,keepgoing;
  int arr[5]={11,22,33,44,55};
  do{
  printf("\n enter the look up value");
  scanf("%d",&key);
  index=binary_search(arr,key);
  if(index==-1)
    printf("\n the key is not in the array");
  else
    printf("\n the key %d was found at index %d",key,index);
    
  printf("\n Do you want to lookup another value?\nEnter(1) to lookup\nEnter(0) to quit out\n");
  scanf("%d",&keepgoing);
    
  }while(keepgoing==1);
    
    return 0;
}
