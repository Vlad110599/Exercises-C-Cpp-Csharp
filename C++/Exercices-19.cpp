#include <iostream>
using namespace std;

int Putere(int, int);

int main()
{
    int baza, putere, r;

    cout << "\nBaza = ";
    cin >> baze;

    cout << "\nPuterea = ";
    cin >> putere;

    r = Putere(baza, putere);

    cout << baza << "^" << putere << " = " << r<<"\n";

    return 0;
}

int Putere(int baza, int putere)
{
    if (putere != 0)
        return (baza*Putere(baza, putere-1));
    else
        return 1;
}
