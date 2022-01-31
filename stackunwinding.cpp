#include<iostream>
using namespace std;
void f1()throw(int)
{
    cout<<"\n f1() start"<<endl;
    throw 30;
    cout<<"\n f1() ends"<<endl;
}
void f2()throw(int)
{
    cout<<"\n f2() starts"<<endl;
    f1();
    cout<<"\n f2() ends"<<endl;
}
void f3()
{
    cout<<"\n f3() starts"<<endl;
    try{
        f2();
        
    }
    catch(int i)
    {
        cout<<"\n caught exeption:"<<endl;
    }
    cout<<"f3() ends"<<endl;
}
int main()
{
    f3();
    return 0;
}

