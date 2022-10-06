#include<stdio.h>
int main()
{
	int a[50],value,position,c,n;
	printf("enter the no of elements : ");
	scanf("%d",&n);
	printf("enter the elements : ");
	for(c=0;c<n;c++)
	scanf("%d",&a[c]);
	printf("enter the position where u want to be inserted : ");
	scanf("%d",&position);
	printf("enter the value u want to be inserted : ");
	scanf("%d",&value);
	for(c=n-1;c>= position-1;c--)
	a[c+1]=a[c];
	a[position - 1]=value;
	printf("the array is : \n");
	for(c=0;c<=n;c++)
	{
		printf("%d\n",a[c]);
	}
	return 0;
}
