#include<stdio.h>
int main()
{
	int age;
	printf("ENTER AGE:");
	scanf("%d",&age);
	

	if(age>=18)
		goto vote;
	else
	    goto cantvote;			
	vote:printf("ELIGIBLE TO VOTE");
	return ;
	cantvote:printf("NOT ELIGIBLE");
	
	return 0;		
}
