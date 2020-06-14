#include<stdio.h>
#include<conio.h>
int marks[30];
int i;
int main()

{
	
    for(i=0;i<=3;i++)
 	{
		printf("enter the marks :");
 		scanf("%d",&marks[i]);
        }
    for(i=0;i<=3;i++)
        {
 		printf("\nmarks of the student : %d",marks[i]);
 		
	}
	getch();
	return 0;
 }
