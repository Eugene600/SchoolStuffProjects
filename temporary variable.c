#include<stdio.h>
int main()
{
	double first, second, temp;
	printf("Enter first number:");
	scanf("%If",&first);
	printf("Enter second number:");
	scanf("%If",&second);
	
	//value of first is assigned to temp
	temp=first;
	
	//value of second is assigned to first
	first=second;
	
	//value of temp(initial value of first) is assigned to second 
	second=temp;
	
	//%.2If displays number up to 2 decimal points
	printf("\nAfter swapping,first number=%.2If\n",first);
	printf("After swapping,second number=%.2If",second);
	return 0;
	
	
}
