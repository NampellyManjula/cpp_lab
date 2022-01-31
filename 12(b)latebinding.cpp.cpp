#include<iostream>
using namespace std;
class animals
{
    public:
    int x =3;
     virtual void sound()
    {
        cout<<"it is parent class"<<endl;
        cout<<"value if x:"<<x<<endl;
    }
};
class dogs:public animals
{
    public:
    void sound()
    {
        cout<<"dog barks"<<endl;
        
    }
};
int main()
{
    animals *a;
    dogs d;
    a = &d;
    a->sound();
    return 0;
}


