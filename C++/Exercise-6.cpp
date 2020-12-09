#include<iostream>
using namespace std;

int main()
{
    int nr,rev=0,r,n;

    cout<<"Introduceti un numar: ";
    cin>>n;

    nr=n;

    while(nr>0)
    {
         r=nr%10;
         rev=rev*10+r;
         nr=nr/10;
    }
    cout<<"\nInversul numarului" <<n<<" este: "<<rev;

    return 0;
}
