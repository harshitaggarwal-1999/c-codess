#include<stdio.h>
main()
{
	int basic;
	float total_salary;
	char grade;
	char str1;
	int hra;
	int da;
	int allow;
	float pf;
	int total;
	scanf("%d",&basic);
	scanf("%c",&str1);
	scanf("%c",&grade);
	
	
	if(grade>=97&&grade<=122)
	{
		grade=grade-32;
	}
	da=.5*basic;
	hra=0.2 * basic;
	pf= 0.11 * basic;
	if (grade==65)
	{
		allow=1700;	
	}
	if(grade==66)
	{
		allow=1500;
	}
	if(grade>=67)
	{
		allow=1300;
	}
	total_salary= basic + hra + da + allow - pf;
	total=total_salary;
	if(total+0.5>=total_salary)
	{
		total=total;
	}
	if(total+0.5<total_salary)
	{
		total=total+1;
	}
	printf("%d",total);	
}
