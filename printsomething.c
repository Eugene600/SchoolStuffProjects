#include<stdio.h>
int main()
{
	char snum[20]; 
	// printsomething("WELCOME");	
	
	int total;
	total = calculateMe(56,300);
	
	// Convert  total to a string and store it in snum
	sprintf(snum, "%d", total); 
	
	printf(snum);
		
	return 0;
}

/*printsomething( something)
{
	printf(something);
}
*/

calculateMe(y, x)
{	
	int total;
	total = x + y;
	
	return total;	
}	
