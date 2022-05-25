#include<stdio.h>

int main()
{
	FILE*fp;
	fp=fopen("eugene.txt","r");
	char str[50];
	printf("Enter Name:");
	fgets(str,fp);
	fclose(fp);
	
	return 0;
}
