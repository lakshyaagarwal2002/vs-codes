#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three no.\n";
    cin>>a>>b>>c;
    if(a>=b && a>=c)
    cout<<a<<" is greatest\n";
    else if(b>=a && b>=c)
    cout<<b<<" is greatest\n";
    else
    cout<<c<<" is greatest\n";
    return 0;
}