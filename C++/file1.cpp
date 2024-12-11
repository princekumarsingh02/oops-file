#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string 
    ofstream fout("D:\\prince.txt");  //with help of constructor
    cout<<"enter your name:"<<endl;
    cin>>name;
    fout<<name<<endl;
    fout.close();
    ifstream fin("D:\\prince.txt");
    fin>>name;
    cout<<endl<<"name="<<name<<endl;
    fin.close();

    return 0;
    
}