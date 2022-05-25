#include<stdio.h>
int areaofrectangle()
{
	int length,width,area;
	//length	
	printf("Enter Length");
	scanf("%d",&length);
	
	//width
	printf("Enter Width");
	scanf("%d",&width);
	
	//area
	area=length * width;
	printf("AREA OF RECTANGLE IS %d\n\n",area);
	

}

int areaoftriangle()
{
	int length,height,area;
	//length	
	printf("Enter Length");
	scanf("%d",&length);
	
	//height
	printf("Enter Height");
	scanf("%d",&height);
	
	//area
	area=(length * height) /2;
	printf("AREA OF TRIANGLE IS %d\n\n",area);
}


int areaofcircle()
{
	int radius,area;
	//radius	
	printf("Enter Radius");
	scanf("%d",&radius);
	
	//area
	area=( 22 * radius * radius) /7;
	printf("AREA OF CIRCLE IS %d",area);
}

int main()
{
	//calling function
	areaofrectangle();
	areaoftriangle();
	areaofcircle();
	return 0;
}
