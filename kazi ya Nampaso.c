#include<stdio.h>
int main()
{
	int amount,net_discount;
	float total;
	printf("ENTER THE AMOUNT SPENT");
	scanf("%d",&amount);
	//net_discount=amount-discount
	if(amount>=10000 && amount<=14999)
	{
		net_discount=(10*amount)/100;
	}
	else if(amount>=15000 && amount<=24999)
	{
		net_discount=(15*amount)/100;
	}
	
	else if(amount>=25000 && amount<=29999)
	{
		net_discount=(20*amount)/100;
	}
	
	else if(amount>=30000)
	{
		net_discount=(25*amount)/100;
	}
	
	//calculating total pay
	total=amount-net_discount;
	printf("\nTHE NET AMOUNT IS %f",total);
	
	return 0;
	
}
