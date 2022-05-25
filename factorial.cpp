#include<iostream>
using namespace std;

int main()
{
	int n,x,i,factorial=1;
	cout<<"Please Enter Number:";
	cin>>n;
	if(n<0)
		cout<<"\nNumber is Invalid!!!";
	else
	{
		for(x=1;x<=n;++x)
		{
		factorial=factorial*x;
		cout<<"\nFactorial of "<<x<<"is "<<factorial;
		}
	}	
}
