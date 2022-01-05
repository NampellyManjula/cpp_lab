//students information//
#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		int rollno;
		char grade;
	
};
int main()
{
	student s[3];
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"enter information of students:"<<i+1<<endl;
		cout<<"name:";
		cin>>s[i].name;
		cout<<"rollno:";
		cin>>s[i].rollno;
		cout<<"grade:";
		cin>>s[i].grade;
	
	}
	for(i=0;i<3;i++)
	{
		cout<<"student:"<<i+1;
		cout<<"name:"<<s[i].name<<endl;
		cout<<"rollno:"<<s[i].rollno<<endl;
		cout<<"grade:"<<s[i].grade<<endl;
	}
	return 0;
}
