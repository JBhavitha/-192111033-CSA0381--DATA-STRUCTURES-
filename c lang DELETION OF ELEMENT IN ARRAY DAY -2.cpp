#include<stdio.h>
int main()
{
	int a[50],c,n,position,value;
	printf("enter the no of elements : ");
	scanf("%d",&n);
	printf("enter the elements : ");
	for(c=0;c<n;c++)
	scanf("%d",&a[c]);
	printf("enter the position  where u want to delete : ");
	scanf("%d",&position);
	if(position>n+1)
	{
		printf("the element cant be deleted/n");
	}
	else
	{
		for(c=position -1 ;c<n-1;c++)
		a[c]=a[c+1];
		printf("resultant array is : ");
		for(c=0;c<n-1;c++)
		printf("%d\n",a[c]);
	}
	
}
