#include<iostream>
using namespace std;
class demo
{
    public:
    int n;
    void get()
    {
        cout<<"enter  n:"<<endl;
        cin>>n;
    }
    
    void show()
    {
        cout<<"n is :"<<n<<endl;
    }
};
int main()
{
    int i;
    demo d;
    demo *ptr = new demo[4];
    for(i=0;i<4;i++)
    {
        ptr->get();
        ptr->show();
    }
    return 0;

}


