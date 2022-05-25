#include<stdio.h>
int main()
{
//	one();
	two();
	return 0;
}
/*
int one()
{
	int a[5],i,j;
	printf("ENTER ARRAY ELEMENTS:\n",a[i]);
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(j=0;j<5;j++)
	{
		printf("the array element of %d is %d\n",a[i],a[j]);
	} 
} */

int two()
{
	int marks[5],i;
	float sum=0,avg;
	printf("ENTER STUDENT MARKS");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+marks[i];
	}
	avg=sum/5;
	printf("sum=%f\n",sum);
	printf("average=%f\n",avg);
}
