#include<iostream>

using namespace std;

class student{
	public:
	string Name;
	string Place;
	int Age;
	string Coursedone;
	
	student(string name,string place,int age)
	{
		Name=name;
		Place=place;
		Age=age;
		
	}
	void information()
{
	cout<<"Name of Student is "<<Name<<endl;
	cout<<"Place of Student is "<<Place<<endl;
	cout<<"Age of Student is "<<Age<<endl;
	cout<<"Courses done by Student is "<<Coursedone;	
}	
	
};




int main()
{
	student Brian("Brian Kimani","Nairobi",19);
	Brian.information();
	
	
	
	
	
	return 0;
}
