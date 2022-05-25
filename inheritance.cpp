#include<iostream>
using namespace std;

class student{
	public:
		string Name;
		int Age;
		int Fees;
	student(string name, int age,int fees)
	{
		Name=name;
		Age=age;
		Fees=fees;
	}
	
	void information()
	{
		cout<<"Name of Student is: "<<Name<<endl;
		cout<<"Age of Student is: "<<Age<<endl;
		cout<<"Fee to be paid by student is: "<<Fees<<endl;
	}
	
};
class postgraduate:public student{
	public:
		postgraduate(string name,int age,int fees):student(name,age,fees){
			
		}
	void Coursedone()
	{
		cout<<"Almost done";
		}	
};



int main()
{
	student student1("Brian",19,29000);
	student1.information();
	cout<<"\n";
	student student2("Joy",21,1000);
	student2.information();
	cout<<"\n";
	postgraduate post1("Liz",31,2100);
	post1.information();
	post1.Coursedone();	
}		
