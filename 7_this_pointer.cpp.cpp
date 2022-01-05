//this pointer//
#include<iostream>
using namespace std;
class box
{
	public:
		int l,b,h,volume;
		public:
			void set_values(int x,int y, int z)
			{
				l=x;b=y;h=z;
			}
			void get_values()
			{
				cout<<l<<endl<<b<<endl<<h<<endl;
			}
			void display_volume()
			{
				volume = l*b*h;
				cout<<"volume="<<l*b*h<<endl;
			}
};
int main()
{
	box b;
	box*p;
	p = &b;
	p->set_values(2,3,4);
	p->get_values();
	p->display_volume();
	return 0;	
}

			

