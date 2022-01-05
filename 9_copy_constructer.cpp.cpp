//copy constructer//
#include<iostream>
using namespace std;
class robo
{
	private:
		int a;
		public:
			robo()
			{
				cout<<"enter a:"<<endl;
				cin>>a;
				
			}
			robo(robo &x)
			{
			
				a = x.a;
			}
			void display()
			{
				cout<<a<<endl;
				
			}
};
int main()
{
	robo obj1;
	robo obj2 = obj1;
	obj1.display();
	obj2.display();
	return 0;
}

