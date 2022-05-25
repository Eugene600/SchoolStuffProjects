#include<iostream>
#include<string>
using namespace std;

class student{
	private:
		string name;
		int age;
		int reg_no;
	public:
		void setName(string n)
		{
			name=n;
		}
		string getName()
		{
			return name;
		}	
		void Age()
		{
			int a;
			cout<<"Please Enter Your Age";
			cin>>a;
			cout<<a;
		}
};

int main()
{
	student student1;
	student1.setName("Brian");
	cout<<student1.getName()<<endl;
	student1.Age();
}
