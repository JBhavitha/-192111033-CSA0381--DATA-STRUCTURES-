#include<stdio.h>
#include<math.h>
void insertionsort (int arr[],int n)
{
int i,key,j;
for(i=1;i<n;i++)
{
key=arr[i];
j=i-1;
while(j>=0 && arr[j]>key)
{
DATA STRUCTURES
arr[j+1arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
}
void printarray(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d",arr[i]);
printf("\n");
}
int main()
{
int arr[]={1,5,6,43,53};
int n = sizeof(arr)/sizeof(arr[0]);
insertionsort(arr,n);
printarray(arr,n);
return 0;
}
