#include<iostream>
using namespace std;

int main()
{
	int math,eng,kisw;
	int total=0,mean=0;
	cout<<"PLease Enter Math marks: "<<endl;
	cin>>math;
	
	cout<<"PLease Enter English marks: "<<endl;
	cin>>eng;
	
	cout<<"PLease Enter Kiswahili marks: "<<endl;
	cin>>kisw;
	
	total=math+eng+kisw;
	cout<<"The Total is "<<total<<endl;
	
	mean=total/3;
	cout<<"The Mean is "<<mean<<endl;
	
	switch(mean)
	{
		case 0 ... 34: 
				cout<<"Grade is E";
				break;
		case 35 ... 50:
				cout<<"Grade is D";
				break;
		case 51 ... 69:
				cout<<"Grade is C";
				break;	
		case 70 ... 85:
				cout<<"Grade is B";
				break;
		case 86 ... 100:
				cout<<"Grade is A";
				break;
		default:
				cout<<"Error!!!";
				break;									
	}
	
	return 0;
}
