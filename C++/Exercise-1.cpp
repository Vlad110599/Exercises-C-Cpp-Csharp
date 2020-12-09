#include<iostream>
using namespace std;

int main()
{
    int i,nr, a=0, b=1, next;

    a=0;
    b=1;

    cout<<"nr = ";
    cin>>nr;

    cout<<"\nFibonacci: \n\n";
    for(i=0; i<nr; i++)
    {
        cout<<" "<<a<<" ";
        next = a + b;
        a = b;
        b = next;
    }

    cout<<"\n";

    return 0;
}
