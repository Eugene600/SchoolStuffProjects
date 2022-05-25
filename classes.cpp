#include<iostream>
using namespace std;

	//base class
	class Animal{
		public:
		void eat(){
			cout<<"I can eat!"<<endl;
	}	
		void sleep(){
			cout<<"I can sleep!"<<endl;
		}
	};
	//derived class
	class Dog:public Animal{
	public:
		void bark(){
			cout<<"I can bark!Meow!Meow!"<<endl;
		}	
	};
	
	int main(){
		Dog sparky;
		sparky.eat();
		sparky.sleep();
		sparky.bark();
		
		return 0;
	}
	

