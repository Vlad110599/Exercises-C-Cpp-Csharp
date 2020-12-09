#include<iostream>
using namespace std;

int main()
{
    int an;

    cout<<"Introdueti un an (ex: 1999): ";
    cin>>an;

    if(an%100==0)
    {
        if(an%400==0)
        {
           cout<<"\nAnul "<<an<<" este an bisect.\n";
        }

    }
    else
    {
        if(an%4==0)
        {
            cout<<"\nAnul "<<an<<" este an bisect.\n";
        }
        else
        {
            cout<<"\nAnul "<<ab<<" nu este an bisect.\n";
        }

    }

   return 0;
}
