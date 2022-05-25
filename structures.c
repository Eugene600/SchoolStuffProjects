#include<stdio.h>
#include<string.h>

struct student
{
	char name[20];
	int adm_no;
	float fee_balance;
};

int main()
{
	struct student student1,student2,student3,student4,student5;
	//student 1
	strcpy(student1.name,"Eugene Wachira");
	student1.adm_no=14087;
	student1.fee_balance=1200;
	
	printf("Name: %s\n",student1.name);
	printf("Adm No: %d\n",student1.adm_no);
	printf("Fee Balance: %2f\n",student1.fee_balance);
	//student2
	strcpy(student2.name,"John Limani");
	student2.adm_no=14237;
	student2.fee_balance=2100;
	
	printf("Name: %s\n",student2.name);
	printf("Adm No: %d\n",student2.adm_no);
	printf("Fee Balance: %2f\n",student2.fee_balance);
	
	return 0;
}
