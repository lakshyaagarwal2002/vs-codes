#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter year\n";
    cin>>n;
    if(n%4==0)
    {
        if(n%100==0)
        {
            if(n%400==0)
            {
                cout<<"It is a leap year";
            }
            cout<<"It is not a leap year";
        }
        cout<<"It is a leap year";
    }
    else
    {
        cout<<"It is not a leap year";
    }
    return 0;
}