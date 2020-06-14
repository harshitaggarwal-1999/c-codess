#include<stdio.h>
#include<conio.h>
int sum(int x,int y, int z)
{
	return x + y + z;
}

int main()
{
	int s;
	s=sum(1,2,3);
	printf("%d",s);
	return 0;
}
