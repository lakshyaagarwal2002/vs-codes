#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"It is not a prime no.\n";
            return 0;
        }
    }
    cout<<"It is a prime no.\n";
    return 0;
}