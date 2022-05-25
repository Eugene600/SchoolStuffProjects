#include<stdio.h>
int main()
{
	int a=5,b=6,c;
	int *p,*q;
	p=&a;
	q=&b;
	c=*q;
	*p=20;
	
	printf("The value of a is %d",*p);
	
	return 0;
}
