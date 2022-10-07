#include<stdio.h>
int a[100],choice,n,top,x,c;
void push(void);
void pop(void);
void display(void);
int main()
{
	top=-1;
	printf("enter the size of an array : ");
	scanf("%d",&n);
	printf("choose the stack operations  : ");
	printf("push,pop,display\n");
	do
	{
		printf("enter a choice : \n");
		scanf("%d",&choice);
		switch (choice )
		{
			case 1:
				{
					push();
					break;
				}
			case 2 :
				{
					pop();
					break;
				}
			case 3 :
				{
					display();
					break;
				}
			case 4 :
			    {
			    	printf("try again \n");
				}
		}
	}
	while(choice!=4);
	return 0;
}
	void push()
	{
		if(top>=n-1)
		{
			printf("stack is overflow \n");
		}
		else 
		{
			printf("enter the value to be   pushed : ");
			scanf("%d",&x);
			top++;
			a[top]=x;
		}

	}
		void pop()
		{
			if(top<=-1)
			{
				printf("stack is underflow \n");
			}
			else
			{
				printf("popped elements are :%d \n",a[top]);
				top--;
			}
		}
		 void display()
		 {
		 	if (top >=0)
		 	{
		 		printf("the elements in the stack are : ");
		 		for(c=0;c>=0;c--)
		 		printf("\n%d",a[c]);
		 		
			 }
			 else
			 {
			 	printf("the stack is empty ");
			 }
	    }  


