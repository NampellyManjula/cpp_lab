//pointer//
#include<iostream>
using namespace std;
class pointers
{
	public:
		int a;
		float b;
		char c;
		
};
int main()
{
	pointers obj;
	pointers *ptr;
	ptr = &obj;
	ptr->a = 10;
	ptr->b = 23.5;
	ptr->c = 'A';
	cout<<ptr->a<<endl;
	cout<<ptr->b<<endl;
	cout<<ptr->c<<endl;
	return 0;
}
