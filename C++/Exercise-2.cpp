#include<iostream>

using namespace std;

int main()
{
    int an,sapt,zile;

    cout<<"Introduceti numarul de zile: ";
    cin>>zile;

    an=zile/365;
    zile=zile%365;
    sapt=zile/7;
    zile=zile%7;

    cout<<"\nAni : "<<y<<"\nSaptamani :: "<<w<<"\nZile: "<<d<<"\n";

    return 0;
}
