//default ,parameterized constructers//
#include<iostream>
using namespace std;
class sample
{
	public:
		int a;
		public:
			sample()                 //default constructer//
			{
				cout<<"enter a:"<<endl;
				cin>>a;
			}
			int b,c;
			public:
				sample(int b,int c)
				{
					b =b; c=c;
					cout<<"value of b ="<<b<<endl;
					cout<<"value of c="<<c<<endl;
				}

};
int main()
{
	sample s;
	cout<<"value of a:"<<s.a<<endl;
	sample r(3,4);
	sample r1 = sample(5,8);
	return 0;
}
