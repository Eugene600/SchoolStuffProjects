#include<stdio.h>
//#include<string.h>
//create struct with person1 variable
struct person
{
	char name[50];
	int citNo;
	float salary;
}person1;

int main()
{
	//assign value to name of person1
	strcpy(person1.name,"You Need Wachira");
	
	//assign values to other person1 variables
	person1.citNo=47;
	person1.salary=200000;
	
	//print struct variables
	printf("Name:%s\n",person1.name);
	printf("Citizenship No:%d\n",person1.citNo);
	printf("Salary:%.2f",person1.salary);
	
	return 0;
}
