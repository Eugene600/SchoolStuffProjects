#include<stdio.h>
int main()
{
	int a[10],i;
	int even=0,odd=0;
	printf("Enter array elements\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			even++; //or you can use even=even+1
		}
		
		else
		{
			odd++; //or you can use odd=odd+1
		}
	}
	
	printf("The total no of even numbers is:%d",even);
	printf("\nThe total no of odd numbers is:%d",odd);
	
	return 0;
}
