#include<stdio.h>
void bubble_sort(int farr[],int n)
{
  int i,j,temp;
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if (farr[j]>farr[j+1])
      {
          temp=farr[j];
          farr[j]=farr[j+1];
          farr[j+1]=temp;
      }
    }
  }
}
int main(void)
{
  int i,arr[]={4,6,2,5,3,11,9,1,7};
  size_t n=sizeof(arr)/sizeof(arr[0]);
  bubble_sort(arr,n);
  for(i=0;i<n;i++)
  {
    printf(" %d",arr[i]);
  }
}
