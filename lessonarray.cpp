#include<iostream>
using namespace std;
int main()
{
	int numbers[5]={7,5,6,12,35};
	cout<<"The numbers are: ";
	 for(int i=0;i<5;i++)
	 {
	 	cout<<i<<" ";
	 }
	 cout<<"\nThe numbers are: ";
	 
	 for(int i=0;i<5;++i)
	 {
	 	cout<<numbers[i]<<" ";
	 }
}
