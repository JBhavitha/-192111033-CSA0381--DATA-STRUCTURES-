#include<stdio.h>
int main()
{
	int a[10],n,c,s;
	printf("enter the no of elements : \n");
	scanf("%d",&n);
	printf("enter the elements : ");
	for(c=0;c<n;c++)
	scanf("%d",&a[c]);
	printf("enter the elements u want to be searched :");
	scanf("%d",&s);
	for(c=0;c<n;c++)
	{
		if(a[c]==s)
		{
			printf("the element is present in :%d\n",c+1);
	
		}
		
	}
	if(s==n)
		{
			printf("the element is not found ");
		}
else 
	{
		printf("enter again");
	}
	return 0;
	
	
}
