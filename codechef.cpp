#include<stdio.h>
int main()
{
	int a,b,sum=0;
	scanf("%d",&a);
	scanf("%d",&b);
	while(sum!=1)
	{
		a=a%10;
		b=b%10;
		sum=a+b;
		a=b;
		b=sum;
		printf("%d",a);
		printf("%d",b);
	}
	
}
