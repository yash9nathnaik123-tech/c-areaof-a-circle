#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%2==0)
    {
        cout<<num<<" is an even number."<<endl;
    }
    else if(num==0)
    {
        cout<<num<<" is zero."<<endl;
    }
    else
    {
        cout<<num<<" is an odd number."<<endl;
    }
    return 0;
}