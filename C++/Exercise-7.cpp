#include<iostream>
using namespace std;

void CMMMC(int,int);

int main()
{
    int a,b;

    cout<<"a= ";
    cin>>a;
    cout<<"\nb= ";
    cin>>b;

    CMMMC(a,b);

  return 0;
}

//function to calculate l.c.m
void CMMMC(int a,int b)
{
    int m,n;

    m=a;
    n=b;

    while(m!=n)
    {
        if(m < n)
        {
        m=m+a;
        }
        else
        {
            n=n+b;
            }
    }

    cout<<"\nCMMMC dintre "<<a<<" si "<<b<<" este: "<<m<<"\n";
}
