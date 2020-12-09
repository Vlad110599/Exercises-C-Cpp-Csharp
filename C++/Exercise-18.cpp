#include <iostream>
#include <cmath>
using namespace std;

long long convert(int);

int main()
{
    int n, nb;

    cout << "\nIntroduceti un numar: \n";
    cin >> n;
    nb = convert(n);

    cout << n << " =  " << nb << " in numar binar" << endl ;
    return 0;
}

long long convert(int n)
{
    long long nb = 0;
    int r, i = 1, s = 1;

    while (n!=0)
    {
        r = n%2;
         n /= 2;
        nb += r*i;
        i *= 10;
    }
    return nb;
}
