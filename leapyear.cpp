#include<iostream>
using namespace std;

int main()
{
	int year;
	cout<<"Enter Year:";
	cin>>year;
	
	if(year%4==0){
		if(year%100==0){
			if(year%400==0)
				cout<<year<<"\nis a leap year";
			else
				cout<<year<<"\nis not a leap year";	
		}
				
		else
			cout<<year<<"\nis a leap year";	
	}
		
	else
		cout<<year<<"\nis not a leap year";	
		
			
	
	return 0;	
} 