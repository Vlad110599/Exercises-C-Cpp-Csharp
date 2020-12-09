#include<iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout <<"a= ";
    cin>>a;
    cout <<"\nb= ";
    cin>>b;
    cout <<"\nc= ";
    cin>>c;

    if(a>=b && a>=c)
    {
    cout<<"\nCel mai mare numari dintre "<<a<<", "<<b<<", "<<c<<" este: "<<a<<"\n";
    }
    if(b>=a && b>=c)
    {
    cout<<"\nCel mai mare numari dintre "<<a<<", "<<b<<", "<<c<<" este: "<<b<<"\n";
    }
    if(c>=a && c>=b)
    {
    cout<<"\nCel mai mare numari dintre "<<a<<", "<<b<<", "<<c<<" este: "<<c<<"\n";
    }

   return 0;
}
