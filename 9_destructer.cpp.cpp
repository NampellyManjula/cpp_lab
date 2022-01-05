//destructer//
#include<iostream>
using namespace std;
class destructer
{
	int x;
	public:
	~destructer()
	{
		cout<<"welcome"<<endl;
		
		
	}
	void display()
	{
		cout<<x<<endl;
		
	}
};
int main()
{
	destructer d;
	d.display();
	return 0;
}
