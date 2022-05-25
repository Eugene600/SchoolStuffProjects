#include<stdio.h>
int main()
{
	int no[5],i,sumEven=0,sumOdd=0;
	printf("ENTER FIVE INTEGERS\n");
	//First for loop
	for(i=0;i<5;i++)
		scanf("%d",&no[i]);
	//Second for loop
	for(i=0;i<5;i++)
	{
		if(no[i]%2==0)
		{
			sumEven=sumEven+no[i];
		}
		else
		{
			sumOdd=sumOdd+no[i];	
		}	
	}

	printf("Sum of odd numbers are: %d",sumOdd);
	printf("\nSum of even numbers are: %d",sumEven);

	return 0;		
}
