#include<iostream>
using namespace std;

int main()
{
    int i, n, fact=1;

    cout<<"Introduceti un numar: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"\nFactorialul numarului "<<n<<"! este: "<<fact<<"\n";

    return 0;
}
