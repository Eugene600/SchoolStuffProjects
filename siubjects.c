#include<stdio.h>
int main()
{
	math();
	eng();
	kisw();
	chem();
	phy();
	bio();
	cre();
	bs();
	total();
	return 0;
}

int math()
{
	int pp1,pp2,mathematics;
	
	printf("ENTER MARKS FOR PP1");
	scanf("%d",&pp1);
	
	printf("ENTER MARKS FOR PP2");
	scanf("%d",&pp2);
	
	mathematics=(pp1+pp2)/2;
	printf("MATH %d\n",mathematics);	
	
}

int eng()

{
	int pp1,pp2,pp3,english;
	
	printf("ENTER MARKS FOR PP1");
	scanf("%d",&pp1);
	
	printf("ENTER MARKS FOR PP2");
	scanf("%d",&pp2);
	
	printf("ENTER MARKS FOR PP3");
	scanf("%d",&pp3);
	
	english=(pp1+pp2+pp3)/3;
	printf("ENG %d\n",english);	
	
}

int kisw()

{
	int pp1,pp2,pp3,kiswahili;
	
	printf("ENTER MARKS FOR PP1");
	scanf("%d",&pp1);
	
	printf("ENTER MARKS FOR PP2");
	scanf("%d",&pp2);
	
	printf("ENTER MARKS FOR PP3");
	scanf("%d",&pp3);
	
	kiswahili=(pp1+pp2+pp3)/3;
	printf("KISW %d\n",kiswahili);	
	
}

int chem()

{
	int pp1,pp2,pp3,chemistry;
	
	printf("ENTER MARKS FOR PP1");
	scanf("%d",&pp1);
	
	printf("ENTER MARKS FOR PP2");
	scanf("%d",&pp2);
	
	printf("ENTER MARKS FOR PP3");
	scanf("%d",&pp3);
	
	chemistry=(pp1+pp2+pp3)/3;
	printf("CHEM %d\n",chemistry);	
	
}

int phy()

{
	int pp1,pp2,pp3,physics;
	
	printf("ENTER MARKS FOR PP1");
	scanf("%d",&pp1);
	
	printf("ENTER MARKS FOR PP2");
	scanf("%d",&pp2);
	
	printf("ENTER MARKS FOR PP3");
	scanf("%d",&pp3);
	
	physics=(pp1+pp2+pp3)/3;
	printf("PHY %d\n",physics);	
	
}

int bio()

{
	int pp1,pp2,pp3,biology;
	
	printf("ENTER MARKS FOR PP1");
	scanf("%d",&pp1);
	
	printf("ENTER MARKS FOR PP2");
	scanf("%d",&pp2);
	
	printf("ENTER MARKS FOR PP3");
	scanf("%d",&pp3);
	
	biology=(pp1+pp2+pp3)/3;
	printf("BIO %d\n",biology);	
	
}

int cre()
{
	int pp1,pp2,religion;
	
	printf("ENTER MARKS FOR PP1");
	scanf("%d",&pp1);
	
	printf("ENTER MARKS FOR PP2");
	scanf("%d",&pp2);
	
	religion=(pp1+pp2)/2;
	printf("CRE %d\n",religion);	
	
}

int bs()
{
	int pp1,pp2,business;
	
	printf("ENTER MARKS FOR PP1");
	scanf("%d",&pp1);
	
	printf("ENTER MARKS FOR PP2");
	scanf("%d",&pp2);
	
	business=(pp1+pp2)/2;
	printf("BS %d\n",business);	
	
}

int total()
{
	int mathematics,english,kiswahili,chemistry,physics,biology,religion,business,total,mean;
	total=mathematics+english+kiswahili+chemistry+physics+biology+religion+business;
	mean=(total)/8;
	printf("MEAN IS %d",mean);
}
