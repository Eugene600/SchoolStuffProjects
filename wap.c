#include<stdio.h>
int main()
{
	int no[10],i,even=0,odd=0;
	printf("ENTER TEN NUMBERS\n");
	//first for loop
	for(i=0;i<=9;i++)
	{
		scanf("%d",&no[i]);
	}
	//second for loop
	for(i=0;i<=9;i++)
	{
		if(no[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("THE SUM OF EVEN NUMBERS IS %d",even);
	printf("\nTHE SUM OF ODD NUMBERS IS %d",odd);
	
	return 0;
}
