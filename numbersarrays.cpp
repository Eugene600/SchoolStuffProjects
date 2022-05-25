#include<iostream>
using namespace std;

int main()
{
	int numbers[5],sum=0,count=0;
	double total=0;
	
	cout<<"Enter 5 numbers: "<<endl;
	for(int i=0;i<5;++i)
	{
		cin>>numbers[i];
	}
	
	
	for(int i=0;i<5;++i)
	{
		sum=sum+numbers[i];	
		++count;
	}
	total=sum;
	double mean=total/count;
	cout<<"\nThe sum is "<<sum;
	cout<<"\nThe mean is "<<mean;
	return 0;
}
