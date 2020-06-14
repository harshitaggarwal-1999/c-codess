#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j,k;
	int sum=0;
	int arr[n];
	scanf("%d",&n);
	arr[0]=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(j=1;j<=n;j++)
	{
		k= arr[j];
		sum = sum +k;
		
	}
	printf("%d",sum);
}
