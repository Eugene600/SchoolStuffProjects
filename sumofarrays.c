#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],i;
	//first array
	printf("Enter first array elements\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	//second array
	printf("Enter second array elements\n");
	for(i=0;i<5;i++)
		scanf("%d",&b[i]);
	//third array
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
		printf("Third array element at index %d is:%d\n",i,c[i]);
	}	
	return 0;	
}


