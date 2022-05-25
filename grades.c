#include<stdio.h>
int main()
{
	int mat,eng,kisw,phy,chem,bio,cre,bs,total,mean;
	
	/*marks for the compulsories*/
	printf("ENTER MARKS FOR MATH\n");
	scanf("%d",&mat);
	
	printf("ENTER MARKS FOR ENG\n");
	scanf("%d",&eng);
	
	printf("ENTER MARKS FOR KISW\n");
	scanf("%d",&kisw);
	
	/*
	marks for sciences
	pick the best two
	*/
	printf("ENTER MARKS FOR PHY\n");
	scanf("%d",&phy);
	
	printf("ENTER MARKS FOR CHEM\n");
	scanf("%d",&chem);
	
	printf("ENTER MARKS FOR BIO\n");
	scanf("%d",&bio);
	
	/*marks for humanities*/
	printf("ENTER MARKS FOR CRE\n");
	scanf("%d",&cre);
	
	/*marks for electives*/
	printf("ENTER MARKS FOR BS\n");
	scanf("%d",&bs);
	
	/*total and mean*/
	total=(mat+eng+kisw+phy+bio+chem+cre+bs);
	printf("total=%d",total);
	
	mean=total/8;
	printf("mean=%d",mean);
	
	
	/*conditions*/
	if(mean>=81)
	{
		mean='A';
		printf("GRADE %c",mean);
	}
	
	else if(mean<=80 && mean>=70)
	{
		mean='B';
		printf("GRADE %c",mean);
	}
	
		else if(mean<=69 && mean>=50)
	{
		mean='C';
		printf("GRADE %c",mean);
	}
	
		else if(mean<=49 && mean>=40)
	{
		mean='D';
		printf("GRADE %c",mean);
	}
	
		else if(mean<=39)
	{
		mean="FAIL";
		printf("GRADE %s",mean);
	}
	
	
	
	return 0;	
}
