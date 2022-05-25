#include<iostream>
using namespace std;

int main()
{
	int x,num,factorial=1;
	cout<<"Please Enter The Number:";
	cin>>num;
	
	for(x=1;x<=num;++x)
	{
		factorial=factorial*x;
		cout<<"\n"<<factorial;
	}

	
	return 0;
}
