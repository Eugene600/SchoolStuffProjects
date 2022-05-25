#include<iostream>

int add(int a,int b)
{
	return (a+b);
}

int main()
{
	int n1,n2;
	
	std::cout<<"Please Enter First Number:";
	std::cin>>n1;
	
	std::cout<<"\nPlease Enter Second Number:";
	std::cin>>n2;

	int sum=add(n1,n2);
	std::cout<<"\nThe Sum is "<<sum;
	
	return 0;
}

