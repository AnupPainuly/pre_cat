#include<stdio.h>
void selection_sort(int farr[],int n)
{
  int i,j,temp;
  for(i=0;i<n-1;i++)
  {
    for(j=i;j<n;j++)
    {
      if (farr[i]>farr[j])
      {
        temp= farr[i];
        farr[i]=farr[j];
        farr[j]=temp;
      }
    }
  }
}
int main(void)
{
  int i,arr[]={5,6,3,9,2,13,10,78};
  size_t n= sizeof(arr)/sizeof(arr[0]);
  selection_sort(arr,n);
  for(i=0;i<n;i++)
  {
    printf(" %d",arr[i]);
  }
  return 0;
  
}
