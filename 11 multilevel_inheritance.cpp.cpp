#include<iostream>
using namespace std;
class cow
{
    public:
    int legs = 4;
    void print()
    
    {
    cout<<"it can walk"<<endl;
    cout<<"it sounds as hamba"<<endl;
    cout<<"it eat grass"<<endl;
    }
};
class ox:public cow
{
    public:
    void display()
    {
        cout<<"it can walk"<<endl;
        cout<<"it sounds as hamba"<<endl;
        cout<<"it eat grass"<<endl;
    }
    
};
    
class dog:public ox
{
    public:
    void get()
    {
    cout<<"it eat food"<<endl;
    cout<<"it sounds as bow"<<endl;
    }

};

int main()
{
    dog d;
    d.print();
    d.display();
    d.get();
}


