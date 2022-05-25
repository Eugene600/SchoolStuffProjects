#include<stdio.h>
int main()
{
	int length,width,no_drawers=0;
	int WC=0;
	char wood[30];
	char M[30]="mahoghany";
	char O[30]="oak";
	char P[30]="pine";
	int SA=0;
	int surface_charge=0;
	int min_charge=200,total_charge=0;
	//no of drawers
	printf("enter no of drawers:");
	scanf("%d",&no_drawers);
	int DC=100*no_drawers;
	//type of wood
	printf("\nenter type of wood:");
	scanf("%s",wood);
	//length
	printf("\nenter length:");
	scanf("%d",&length);
	//width
	printf("\nenter width:");
	scanf("%d",&width);
	SA=length*width;
	//if condition for surface area
	if(SA>750)
		surface_charge=surface_charge+50;
	else
		surface_charge=0;
		
	//if condition for wood charge
	if(strcmp(wood,M)==0)
		WC=WC+150; 
	else if(strcmp(wood,O)==0)
		WC=WC+125;
	else
		WC=0;	
	
	total_charge=min_charge+surface_charge+WC+DC;
	printf("\nLength is %d\n",length);
	printf("Width is %d\n",width);
	printf("Surface Charge is %d\n",surface_charge);
	printf("Wood Charge is %d\n",WC);
	printf("Drawer Charge is %d\n",DC);			
	printf("Total charge of desk is %d\n",total_charge);		
			
	return 0;
}
