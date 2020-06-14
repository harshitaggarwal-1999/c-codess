#include<stdio.h>
#include<conio.h>

int stack[5],top=-1;
void push(int x)
	{
		if(top==4)
		{
			printf("overflow");
		}
		else
		{
			top++;
			stack[top]=x;
			printf("entered value in the stack is : %d\n",x);
		}
	}
void pop(int y)
{
	if(top==-1)
	{
		printf("underflow");
	}
	else
	{
		top--;
		printf("element deleted : %d\n",stack[top]);
		stack[top]=0;
		
	}
}
void traverse()
{
	int count=0;
	top=0;
	while(stack[top]!=0)
	{
		count++;
		top++;
		
	}
	for(top=0;top<count;top++)
	{
		printf("element at %dth place : %d\n",top,stack[top]);
	}
}
	
int main()
{
	push(5);
	push(10);
	push(6);
	traverse();
	pop(6);
	traverse();	
}

