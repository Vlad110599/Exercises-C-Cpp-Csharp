#include<iostream>
using namespace std;

int fact(int a);

int main()
{
    int fact(int);
    int f, n;

    cout<<"Introduceti un numar: ";
    cin>>n;

    f=fact(n);
    cout<<"\nFactorialul numarului "<<n<<"! este : "<<f<<"\n";

   return 0;
}

int fact(int a)
{
    if(a==1)
    {
       return(1);
    }
    else
    {
        return(a*fact(a-1));
    }
}
