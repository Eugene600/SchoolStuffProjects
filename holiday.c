#include<stdio.h>
#include<string.h>
int main()
{
	float num_1,num_2;
	char task[50];
	float total;
	char add[50]="Add";
	char minus[50]="Subtract";
	char times[50]="Multiply";
	char div[50]="Divide";
	
	printf("WEELCOME!!!!!!!");
	printf("Please Maintain the Case used as the Calculator is Case Sensitive!\n");
	printf("Enter First Number:");
	scanf("%d",&num_1);
	
	printf("\nEnter Second Number:");
	scanf("%d",&num_2);
	//operation to be used
	printf("\nEnter Operation to be used:(Add,Subtract,Multiply,Divide)\n");
	scanf("%s",&task);
	
	if(strcmp(task,add)==0)
		total=num_1+num_2;
	else if(strcmp(task,minus)==0)
		total=num_1-num_2;
	else if(strcmp(task,times)==0)
		total=num_1*num_2;
	else
		total=num_1/num_2;
		
	printf("\n%d %s %d is %.3f",num_1,task,num_2,total);	
	printf("\nThank You For Using Our Calculator!!!");				
	
	return 0;
}
