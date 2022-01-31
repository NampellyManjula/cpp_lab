#include<iostream>
using namespace std;
class item
{
    public:
    virtual void show() = 0;
};
class demo:public item
{
    void show()
    {
        cout<<"in demo class\n"<<endl;
    }
};
int main()
{
    item *ptr;
    demo d;
    ptr  = &d;
    ptr ->show();
    return 0;
}


