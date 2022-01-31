#include<iostream>
using namespace std;
int main()
{
    try
    {
        try
        {
            throw 30;
        }
        catch(int n)
        {
            cout<<"handled partially"<<endl;
            cout<<"value in first try block:"<<n<<endl;
            cout<<"exeption is rethrown"<<endl;
            throw;
        }
    }
    catch(int n)
    {
        cout<<"handled remainning"<<endl;
    }
    return 0;
}

