#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the numbers a and b";
    cin>>a>>b;
    int x=a-b;

    try
    {
        if (x!=0)
        {
            cout<<"a/x="<<a/x<<endl;
        }
        else{
            throw(x);
        }
        
    }
    catch(int i)
    {
        cout<<"exception cought :x="<<x<<endl;
    }
    
    
  return 0;
}