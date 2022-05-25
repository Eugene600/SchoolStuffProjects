#include<iostream>
using namespace std;
int main()
{
	int var=5;
	int*pointVar;
	
	pointVar=&var;
	
	cout<<"var= "<<var<<endl;
	cout<<"Address of var(&var)= "<<&var<<endl;
	cout<<"pointVar= "<<pointVar<<endl;
	cout<<"Content of the address pointed to by pointVar(*pointVar)= "<<*pointVar<<endl;
	cout<<"The address of pointVar= "<<&pointVar<<endl;
	
	return 0;
}
