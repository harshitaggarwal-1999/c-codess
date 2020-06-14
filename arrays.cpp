#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	int temp[20];
	for(i=0;i<=5;i++)
	{
		printf("enter the value : ");
		scanf("%d",&temp[i]);
	}
	for(j=5;j>=0;j--)
	{
		printf("%d\t",temp[j]);
	}
}
