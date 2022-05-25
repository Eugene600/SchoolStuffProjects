#include<iostream>
#include<list>

using namespace std;

class student{
	public:
	string Name;
	string Place;
	int Age;
	string Coursedone;
	
};

int main()
{
	student Brian;
	Brian.Name="Brian Kimani";
	Brian.Place="Nairobi";
	Brian.Age=19;
	Brian.Coursedone="Computer Science";
	
	cout<<"Name of Student is "<<Brian.Name<<endl;
	cout<<"Place of Student is "<<Brian.Place<<endl;
	cout<<"Age of Student is "<<Brian.Age<<endl;
	cout<<"Courses done by Student is "<<Brian.Coursedone;
	
	
	
	return 0;
}
