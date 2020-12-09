#include<iostream>
using namespace std;

int main()
{
    float cub(float);
                                   //function prototype
    float a,cu;
    cout<<"\nIntroduceti un numar: ";
    cin>>a;

    cu=cub(a);                                         //function calling

    cout<<"\nCubul numarului "<<a<<" este: "<<cu<<"\n";

    return 0;
}

float cub(float a)
{
    float cu;
    cu=a*a*a;
    return(cu);
}
