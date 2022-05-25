#include<iostream>
using namespace std;

int main()
{
	int marks;
	cout<<"Enter Marks:";
	cin>>marks;
	
	if(marks<0 || marks>100)
	{
		cout<<"WRONG OUTPUT";
	}
	
	else if(marks>=0 && marks<=50)
	{
		cout<<"FAIL";	
	}
	
	else if(marks>=50 && marks<=60)
	{
		cout<<"D";	
	}
	
	else if(marks>=60 && marks<=70)
	{
		cout<<"C";	
	}
	
	else if(marks>=70 && marks<=80)
	{
		cout<<"B";	
	}
	
	else if(marks>=80 && marks<=100)
	{
		cout<<"A";	
	}					
		
	return 0;	
}
