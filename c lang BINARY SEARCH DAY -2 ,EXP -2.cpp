#include<stdio.h>
int main()
{
	int a[20],c,n,key,first,last,middle;
	printf("enter the number of elements : \n");
	scanf("%d",&n);
	printf("enter the elements : \n");
	for(c=0;c<n;c++)
	scanf("%d",&a[c]);
	printf("enter the key element : \n");
	scanf("%d",&key);
	first=0;
	last=n-1;
	middle=(first +last )/2;
	while(first<=last)
	{
		if(a[middle]<key)
		{	
		  first=middle+1;
		}
		else if(a[middle]==key)
		{
			printf("the element is present in : %d\n",middle+1);
		
		}
		else
		{
			last=middle-1;
			middle=(first+last)/2;
		}
	}
    	if(first>last)
	   {
		printf("element is not f ound %d");
		return 0;
     	}
}
