#include<stdio.h>
#include<string.h>

struct person
{
	char name[50];
	char place[50];
	char country[50];
	char salary[50];	
}person1;

int main()
{
	strcpy(person1.name,"Eugene Wachira");
	strcpy(person1.place,"Kikuyu");
	strcpy(person1.country,"Kenya");
	strcpy(person1.salary,"Kijana wewe you are poor");
	/*
	person1.place[50]="Kikuyu";
	person1.country[50]="Kenya";
	person1.salary[50]="Wewe kijana you are poor";
	*/
	printf("Name:%s\n",person1.name);
	printf("Home::%s,%s\n",person1.place,person1.country);
	printf("Salary:%s",person1.salary);
	
	return 0;
}
