#include<iostream>
using namespace std;
int main()
{
    char p;
    cout<<"Enter a char\n";
    cin>>p;
    if(p == 'A' || p == 'a' || p == 'E' || p == 'e' || p == 'I' || p == 'i' || p == 'O' || p == 'o' || p == 'U' || p == 'u')
    cout<<"Vowel\n";
    else 
    cout<<"Consonant";
}