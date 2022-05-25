#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp;
	fp=fopen("eugene.txt","w");
	int a=10;
	char str[50];
	printf("Enter Name:");
	gets(str);
	fprintf(fp,"%s\t%d",str,a);
	fclose(fp);
	
	return 0;
}
