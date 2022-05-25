#include<stdio.h>
#include<string.h>

#define CANDIDATE_COUNT

#define CANDIDATE1 "Uhuru"
#define CANDIDATE2 "Ruto"
#define CANDIDATE3 "Raila"
#define CANDIDATE4 "Kalonzo"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;
int count;

struct voter
{
	char name[20];
	char reg_no[20];
};

void castVote(){
	int choice;    
	printf("\n\n ### Please choose your Candidate ####\n\n");
	printf("\n 1. %s", CANDIDATE1);
	printf("\n 2. %s", CANDIDATE2);
	printf("\n 3. %s", CANDIDATE3);
	printf("\n 4. %s", CANDIDATE4);
	printf("\n 5. %s", "None of These");
	
	printf("\n\n Input your choice (1 - 4) : ");
	scanf("%d",&choice);
	
	switch(choice){
	    case 1: votesCount1++; break;
	    case 2: votesCount2++; break;
	    case 3: votesCount3++; break;
	    case 4: votesCount4++; break;
	    case 5: spoiledtvotes++; break;
	    default: printf("\n Error: Wrong Choice !! Please retry");
	             //hold the screen
	             getchar();
	}
	printf("\n thanks for vote !!");
}

void votesCount(){
	printf("\n\n ##### Voting Statics ####");
	printf("\n %s - %d ", CANDIDATE1, votesCount1);
	printf("\n %s - %d ", CANDIDATE2, votesCount2);
	printf("\n %s - %d ", CANDIDATE3, votesCount3);
	printf("\n %s - %d ", CANDIDATE4, votesCount4);
	printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes); 
}

void getLeadingCandidate(){
    printf("\n\n  #### Leading Candiate ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("[%s]",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s]",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s]",CANDIDATE4);
    else
    printf("----- Warning !!! No-win situation----");    
}

int main()
{	
	int i;
	int choice;
	
	char password[20]; /*
	printf("PLEASE ENTER REG NO");
	scanf("%d",&password); 
	int voter; */
	
	struct voter person[100];
	
	//person1
	
	strcpy((person[0].name),"Eugene Wachira");
	strcpy((person[0].reg_no),"05643");
	 count++;
	//person2
	strcpy((person[1].name),"Peter John");
	strcpy((person[1].reg_no),"02344");
	//person 3
	strcpy((person[2].name),"Ham Joseph");
	strcpy((person[2].reg_no),"03466");
	//person 4 
	strcpy((person[3].name),"Kimani Gathogo");
	strcpy((person[3].reg_no),"03444");
	//person5
	strcpy((person[4].name),"Kamau Joseph");
	strcpy((person[3].reg_no),"03214");
	
	printf("%d",person[1].reg_no);
	printf("\nEnter password: ");
	scanf("%d",&password);

	
	for (i=0; i<5;i++)
	{
		if (strcmp(person[i].reg_no,password)==0)
		{
			printf("Welcome!!");
			printf("%d",person[i].reg_no);
			doing();
		}
		else if (strcmp(person[i].reg_no,password)!=0){
			printf("\nNot here %d",person[i].reg_no);
			printf("\n%d",strcmp(person[i].reg_no,password));
			continue;
		}
		else if(i==5 && person[i].reg_no!=password)
		{
			printf("Not eligible!");
			printf("%d",person[i].reg_no);
			printf("\n\n\n%d",i);
			exit(0);
		}
		
		//hold the screen
		getchar();
	}
	return 0;
	
}

void doing(){
	int choice;
	do
		{
		printf("\n\n ###### Welcome to Election/Voting 2019 #####");
		printf("\n\n 1. Cast the Vote");
		printf("\n 2. Find Vote Count");
		printf("\n 3. Find leading Candidate");
		printf("\n 0. Exit");
		
		printf("\n\n Please enter your choice : ");
		scanf("%d", &choice);
		
		switch(choice)
		{
		case 1: castVote();break;
		case 2: votesCount();break;
		case 3: getLeadingCandidate();break;
		default: printf("\n THANK YOU FOR USING OUR SYSTEM:");
		}
		}while(choice!=0);

}
