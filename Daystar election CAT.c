#include<stdio.h>
int main()
{
	int admin;
	printf("ENTER ADMIN NUMBER");
	scanf("%d",&admin);
	
	if(admin>=1118)
	{
		printf("You are eligible for voting");
	}
	
	else
	{
		printf("You are not eligible for voting");
	}
	
	return 0;
}
