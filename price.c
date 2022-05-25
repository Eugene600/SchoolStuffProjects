#include<stdio.h>
int main()
{
	char item[50];
	int price;
	int i;
	
	for(i=0;i<100;i++)
	{
	
	printf("enter item:");
	fgets(item,sizeof(item),stdin);
	
	printf("enter price:");
	scanf("%d",&price);
	
	printf("%s\n",item);
	printf("%d\n",price);
	
	}
	
	return 0;
}
