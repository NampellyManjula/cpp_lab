#include<iostream>
using namespace std;
class sample
{
	public:
		int a =10;
		int b = 20;
		void add()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"a+b="<<a+b<<endl;
		}
};
int main()
{
	sample *obj;
	obj = new sample;
	obj->add();
	delete obj;
	return 0;
}
