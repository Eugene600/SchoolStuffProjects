#include<stdio.h>

int main()
{
int i=0;
int marks[5];//declarationof array
marks[0]=80;//initializationn of array
marks[1]=60;
marks[2]=70;
marks[3]=85;
marks[4]=75;
//traversal of array
for(i=0;i<5;i++)
	{
		printf("%d\n",marks[i]);
	}//end offor loop
return 0;
}
//Output
//80 80 60 70 85 75

