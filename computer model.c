#include<stdio.h>
#include<string.h>

struct computer
{
	char model[50];
	int price;
	int RAM_size;
}computer1,computer2,computer3;

int main()
{
	strcpy(computer1.model,"HP");
	
	computer1.price=160000;
	computer1.RAM_size=16,
	
	printf("MODEL:%s\n",computer1.model);
	printf("PRICE:%d\n",computer1.price);
	printf("RAM SIZE:%d",computer1.RAM_size);
	return 0;
}
