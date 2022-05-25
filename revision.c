#include<stdio.h>
int main()
{
	int marks[5],i,sum=0;
	int mean;
	printf("enter marks for the students\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}
	
	for(i=0;i<5;i++)
	{
		sum=sum+marks[i];
	}
	printf("The total marks are: %d\n",sum);
	mean=sum/5;
	printf("The mean is: %d\n",mean);
	
	switch(mean)
	{
		case 81 ... 100:
			printf("The Grade is A");
			break;
		
		case 69 ... 80:
			printf("The Grade is B");
			break;
			
		case 50 ... 68:
			printf("The Grade is C");
			break;
			
		case 30 ... 49:
			printf("The Grade is D");
			break;
			
		case 0 ... 29:
			printf("The Grade is E");
			break;				
	}
	
	return 0;
}
