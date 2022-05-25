#include<stdio.h>
int main()
{
	int a[2][3],i,j,sum=0;
	printf("ENTER ELEMENTS OF MATRIX");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("THE MATRIX IS:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
			sum=sum+a[i][j];
		}
		printf("\n");	
	}
	printf("\nTHE SUM IS :%d",sum);
	
	return 0;
}
