#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[50];
    ofstream fout("D:\\deepak.txt");
    cout<<"enter your name:"<<endl;
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