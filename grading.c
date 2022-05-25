#include<stdio.h>
int main()
{
	int Eng,Phy,Mat,Bus,Total;
	
	printf("Enter ENGLISH");
	scanf("%d",&Eng);
	
	printf("Enter PHYSICS");
	scanf("%d",&Phy);
	
	printf("Enter MATH");
	scanf("%d",&Mat);
	
	printf("Enter BUSINESS");
	scanf("%d",&Bus);
	
	Total=(Eng+Phy+Mat+Bus)/4;
	printf("Total=%d",Total);
	
	if(Total>=80)
	{
		printf("value is A");
	}

	else if(Total<=79 && Total>=70)
	{
		printf("Value is B");
	}	
	
	else if(Total<=69 && Total>=60)
	{
		printf("Value is C");
	}
	
	else if(Total<=59 && Total>=50)
	{
		printf("Value is D");
	}
	
	else if(Total<=49)
	{
	printf("Value is FAIL");
	}
	
	return 0;
	
}	
		
	
	
	
		


