//struct student//
#include<iostream>
using namespace std;
int main()
{
	struct student
	{
		char name[10];
		int rollno,marks;
		
	};
struct student s1;
cout<<"enter name:"<<endl;
cin>>s1.name;
cout<<"enter rollno,marks"<<endl;
cin>>s1.rollno>>s1.marks;
cout<<"name:"<<s1.name<<endl<<"rollno:"<<s1.rollno<<endl<<"marks:"<<s1.marks<<endl;
return 0;
}
