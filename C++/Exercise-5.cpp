#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float a, b, c, x1, x2, determinant, rp, ri;
    cout << "Coeficientul a: ";
    cin >> a ;
    cout << "\nCoeficientul b: ";
    cin >> b ;
    cout << "\nCoeficientul c: ";
    cin >> c ;

    determinant = b*b - 4*a*c;

    if (determinant > 0)
    {
        x1 = (-b + sqrt(determinant)) / (2*a);
        x2 = (-b - sqrt(determinant)) / (2*a);
        cout << "\nRadacini reale si diferite." << endl;
        cout << "\nx1 = " << x1 << endl;
        cout << "\nx2 = " << x2 << endl;
    }

    else if (determinant == 0)
    {
        cout << "\nRadacini reale si egale." << endl;
        x1 = (-b + sqrt(determinant)) / (2*a);
        cout << "\nx1 = x2 = " << x1 << endl;
    }

    else
    {
        rp = -b/(2*a);
        pi =sqrt(-determinant)/(2*a);
        cout << "\nRadacini complexe si diferite."  << endl;
        cout << "\nx1 = " << rp << "+" << pi << "i" << endl;
        cout << "\nx2 = " << rp << "-" << pi << "i" << endl;
    }

    return 0;
}
