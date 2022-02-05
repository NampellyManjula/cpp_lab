//to create /open file in read ,write mode
#include<fstream>
#include <iostream>
using namespace std;

int main()
{
    char data[100];
    ofstream outfile;
    outfile.open("sample7.txt");
    cout<<"writting to file"<<endl;
    cout<<"enter your name:"<<endl;
    cin.getline(data,100);
    outfile<<data<<endl;
    cout<<"enter age:";
    cin>>data;
    cin.ignore();
    outfile<<data<<endl;
    outfile.close();
    ifstream infile;
    infile.open("sample7.txt");
    cout<<"reading from file"<<endl;
    infile>>data;
    cout<<data<<endl;
    infile>>data;
    cout<<data<<endl;
    infile.close();
    return 0;
}
