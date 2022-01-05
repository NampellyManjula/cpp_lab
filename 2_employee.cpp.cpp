//employee details//
#include<iostream>
using namespace std;
class employee
{
	public:
		string name;
		int id;
		float salary,da,it;
		float print()
		{
			float net;
			net = salary+da-it;
			return net;
			
		}
};
int main()
{
	employee e;
	float net;
	e.name = "manju";
	e.id = 86;
	e.salary = 20000.98;
	e.da = 1000.8;
	e.it = 1299.78;
	cout<<"name:"<<e.name<<endl<<"id:"<<e.id<<endl<<"salary:"<<e.salary<<endl;
	net = e.print();
	cout<<"net_salary:"<<net<<endl;
	return 0;
	
}
