#include<stdio.h>
int main()
{
	int math,bil,eng,acs,total,percentage;
	printf("ENTER MATH");
	scanf("%d",&math);
	
	printf("ENTER BIL");
	scanf("%d",&bil);
	
	printf("ENTER ENGLISH");
	scanf("%d",&eng);
	
	printf("ENTER ACS");
	scanf("%d",&acs);
	
	total=(math+bil+eng+acs);
	percentage=total/4;
	printf("Percentage is %d\n",percentage);
	
	switch(percentage/10)
	{
		//marks 90-100
		case 10:
		case 9:
		printf("GRADE is A");
		break;
	
		case 8:
		case 7:
		printf("GRADE is B");
		break;
	
		case 6:
		printf("GRADE is C");
		break;
	
		case 5:
		case 4:
		printf("GRADE is D");
		break;
	
		default:printf("FAILED");
		break;	
	}
	return 0;
}
