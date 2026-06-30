#include<iostream>
using namespace std;
int main()
{
int cp;
cout<<"Enter the cost price: ";
cin>>cp;
int sp;
cout<<"Enter the selling price: "; 
cin>>sp;
if(sp>cp)
{
    cout<<"Profit: "<<sp-cp<<endl;
}
else if(sp<cp)
{
    cout<<"Loss: "<<cp-sp<<endl;
}
else
{
    cout<<"No profit no loss."<<endl;
}
return 0;

}