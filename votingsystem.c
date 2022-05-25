#include<stdio.h>
void main()
{
	printf("!!!WELCOME TO OUR VOTING SYSTEM!!!");
	printf("\n1. Please enter your age.");
	printf("\n2. Choose the president of your choice.");
	printf("\n3. Check results.");
	
	int option;
	printf("\nPlease Choose an Option:");
	scanf("%d",&option);
	
	switch(option)
	{
		case 1:age();
			break;
			
		case 2:vote();
			break; 
		
		case 3:results();
			break;
				
		default:printf("Thank You For Voting");
			break;		
	}
	main();
	
	//hold screen
	getch();
}

int age(int no)
{
	printf("Please Enter Your Age:");
	scanf("%d",&no);
	
	if(no>=18 && no<=99)
		printf("\nELIGIBLE\n");
	else
		return 0;	
}

void vote()
{
	printf("1.Uhuru\n");
	printf("2.Raila\n");
	printf("3.Ruto\n");
	
	int choice;
	int uhuru=0,raila=0,ruto=0;
	printf("Please Cast Your Vote:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:(choice==1 && choice!=2 && choice!=3);
				uhuru++;
			break;
		
		case 2:(choice==2 && choice!=1 && choice!=3);
				raila++;
			break;
			
		case 3:(choice==3 && choice!=1 && choice!=2);
				ruto++;
			break;
			
		default:printf("\n!!!ERROR!!!");
			break;						
	}
	
}

void results()
{
	int uhuru=0,raila=0,ruto=0;
	printf("Uhuru-%d\n",uhuru);
	printf("Raila-%d\n",raila);
	printf("Ruto-%d\n",ruto);
}

