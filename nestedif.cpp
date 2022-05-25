#include<iostream>
using namespace std;

int main()
{
	float n1,n2,n3;
	cout<<"Enter Three Numbers:"<<endl;
	cin>>n1>>n2>>n3;
	
	if(n1>=n2)
	{
		if(n1>=n3)
			cout<<"Largest Number"<<n1;
	else
		cout<<"Largest Number:"<<n3;		
	}
	else{
		if(n2>=n3)
			cout<<"Largest Number:"<<n2;
		else
			cout<<"Largest Number:"<<n3;	
	}
}
