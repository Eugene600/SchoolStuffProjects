#include<iostream>
using namespace std;

class enemy{
	protected:
		int attackpower;
	public:
		void setAttackpower(int m)
		{
			attackpower=m;
			}	
};

class ninja:public enemy{
	public:
	void attack()
	{
		cout<<"I am a ninja!!! - "<<attackpower<<endl;
	}
};

class monster:public enemy{
	public:
	void attack()
	{
		cout<<"I am a monster!!! -"<<attackpower<<endl;
	}
};

int main()
{
	ninja n;
	monster m;
	enemy*enemy1=&n;
	enemy*enemy2=&m;
	enemy1->setAttackpower(21);
	enemy2->setAttackpower(32);
	n.attack();
	m.attack();
	
	return 0;
}
