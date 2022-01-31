#include<iostream>
using namespace std;
class shape
{
    public:
    virtual void area() =0;
};
class circle :public shape
{
    float r;
    public:
    void area()
    {
        cout<<"enter r:"<<endl;
        cin>>r;
        cout<<"area is :"<<3.14*r*r<<endl;
    }
};
class rectangle: public shape
{
    int l,b;
    public:
    void area()
    {
        cout<<"enter l,b"<<endl;
        cin>>l>>b;
        cout<<"area of rectangle:"<<l*b<<endl;
    }
};
int main()
{
    circle c;
    c.area();
    rectangle r;
    r.area();
    return 0;
}


