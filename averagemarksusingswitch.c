#include<stdio.h>
int main()
{
	int bil,eng,acs,math,total,mean;
	//marks for bil
	printf("ENTER BIL\n");
	scanf("%d",&bil);	
	//marks for english
	printf("ENTER ENG\n");
	scanf("%d",&eng);
	//marks for acs
	printf("ENTER ACS\n");
	scanf("%d",&acs);
	//marks for math
	printf("ENTER MATH\n");
	scanf("%d",&math);
	//total marks
	total=bil+eng+acs+math;
	mean=total/4;
	
	if(mean<=100)
	{
	printf("TOTAL MARKS ARE: %d\n",total);
	printf("MEAN MARKS ARE: %d\n",mean);
	
	switch(mean)
	{
		case 81 ... 100:
			printf("GRADE IS A");
			break;
			
		case 50 ... 80:
			printf("GRADE IS B");
			break;
			
		case 30 ... 49:
			printf("GRADE IS C");
			break;
			
		case 0 ... 29:
			printf("GRADE IS D");
			break;
			
		default:
			printf("WRONG INPUT!!!");
			break;				
	}//end of switch statement	
	}//end of if statement
	else
		printf("WRONG INPUT!!!");
	
	return 0;				
}
