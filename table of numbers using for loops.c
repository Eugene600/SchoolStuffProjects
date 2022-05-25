#include<stdio.h>
int main()
{
	int number,i,a;
	printf("ENTER A NUMBER");
	scanf("%d",&number);
	
	for(i=1;i<=10;i++)
	{
		a=number*i;
		printf("%d\n",a);
	}
	return 0;
}
