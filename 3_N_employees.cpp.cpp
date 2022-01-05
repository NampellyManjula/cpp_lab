//n employees//
#include<iostream>
using namespace std;
class employee
{
	public:
		int emp_no;
		string name;
		float emp_basic;
		float da,it,net_salary;
};
int main()
{
	int n,i;
	cout<<"enter no of employees:"<<endl;
	cin>>n;
	employee e[n];
	for(i=0;i<n;i++)
	{
		cout<<"enter employee no n:"<<endl;
		cin>>n;
		employee e[n];
		for(i=0;i<n;i++)
		{
			cout<<"enter name:"<<endl;
			cin>>e[i].name;
			cout<<"enter emp_no:"<<endl;
			cin>>e[i].emp_no;
			cout<<"enter basic salary:"<<endl;
			cin>>e[i].emp_basic;
		
		}
		for(i=0;i<n;i++)
		{
			e[i].da = 0.52*e[i].emp_basic;
			e[i].it = 0.3*e[i].emp_basic;
			e[i].net_salary = e[i].emp_basic+e[i].da-e[i].it;
			cout<<"details of i:"<<e[i].name<<endl;
			cout<<"employee number:"<<e[i].emp_no<<endl;
			cout<<"basic salary:"<<e[i].emp_basic<<endl;
			cout<<"employee da:"<<e[i].da<<endl;
			cout<<"income tax:"<<e[i].it<<endl;
			cout<<"net salary:"<<e[i].net_salary<<endl;
		}
	}
}
