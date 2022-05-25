#include<iostream>

void swap(int a,int b)
{
	b=a+b;
	a=b-a;
	b=b-a;
	
	std::cout<<"\nAfter swapping inside Swap:\n";
	std::cout<<"a="<<a;
	std::cout<<"\tb="<<b;
}

int main()
{
	int a,b;
	std::cout<<"Enter the two numbers to be swapped"<<std::endl;
	std::cin>>a>>b;
	
	std::cout<<"a="<<a;
	std::cout<<"\tb="<<b;
	swap(a,b);
	
	std::cout<<"\nAfter swapping inside Main:\n";
	std::cout<<"a="<<a;
	std::cout<<"\tb="<<b;
	
	return 0;
}
