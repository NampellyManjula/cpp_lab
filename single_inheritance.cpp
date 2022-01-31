#include<iostream>
using namespace std;
class bike
{
    public:
    int tyres_count;
    float milage;
    void get_values()
    {
        cout<<"enter tyres_count:"<<endl;
        cin>>tyres_count;
        cout<<"enter milage:"<<endl;
        cin>>milage;
        
    }
    void display()
    {
        cout<<"tyres_count:"<<tyres_count<<endl;
        cout<<"milage:"<<milage<<endl;
    }
};
class car:public bike
{
    public:
    
    int tyres_count;
    float milage;
    void get_values()
    {
        cout<<"enter tyres_count:"<<endl;
        cin>>tyres_count;
        cout<<"enter milage:"<<endl;
        cin>>milage;
    }
    void display()
    {
        cout<<"tyres_count:"<<tyres_count<<endl;
        cout<<"milage:"<<milage<<endl;
    }
};
int main()
{

    car c;
    c.get_values();
    c.get_values();
    c.display();
    c.display();
    return 0;
}
    




