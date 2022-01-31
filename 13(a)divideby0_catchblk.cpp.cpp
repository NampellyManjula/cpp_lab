#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter a,b:"<<endl;
cin>>a>>b;
try
{
    if(b==0)
      throw b;
    else
       cout<<"result ="<<a/b<<endl;
}
catch(int b)
{
    cout<<"b cannot be zero"<<endl;
}
return 0;
}




