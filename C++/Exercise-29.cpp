#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<iomanip>
#include<limits.h>

using namespace std;

class Pereche
{
public:
    Pereche(int = 0,long double = 0);
    void setPereche(int,long double);
    int getP() const {return a;}
    long double getD() const {return b;}
    void setP(int a){this->a = a;}
    void setD(long double b){this->b = b;}
    friend ostream& operator <<(ostream&, const Pereche&);
protected:
    int a;
    long double b ;
};

Pereche::Pereche(int x, long double y)
 { setPereche(x, y); }

 void Pereche::setPereche(int x, long double y)
{
 a = x;
 b = y;
}

ostream& operator <<(ostream& output, const Pereche& p)
{

    if((long double)p.getD())
    {
        output << "(" << p.getP() << ", " << setprecision(10) << p.getD() << ")";
    }
    else
    {
        output << "(" << p.getP() << ", " << p.getD() << ")";
    }

  return output;
}

//-------------- RATIONAL ----------------//
class Rational : public Pereche
{
int cmmdc(int,int);
	void ireductibil();
	public:
	Rational(int=0,int=1);
    Rational getnumarator(){return a;}
	Rational getnumitor(){return b;}
	Rational operator + (Rational&);
	Rational operator*(Rational&);
};

int Rational::cmmdc(int x,int y)
{
	x=abs(x);
	y=abs(y);
	while(x!=y)
	if(x>y)
		x-=y;
	else
		y-=x;
	return x;
}

void Rational::ireductibil()
{
	if(a==0) b=1;
	else
		{
			if((abs(a)!=1)&&(abs(b)!=1))
			{
				int d;
				d=cmmdc(a,b);
				a/=d;
				b/=d;
			}
		if(b<0)
		{
			a=-a;
			b=-b;
		}
	}
}

inline Rational::Rational(int x,int y):Pereche(x,y)
{
	setPereche(x,y);
	ireductibil();
}

Rational Rational::operator + (Rational& r)
{
    cout<< "(" << a << ", " << b << ") " << '+' << " (" << r.a << ", " << r.b << ") = ";
	Rational p;
	p.a=a*r.b+b*r.a;
	p.b=b*r.b;
	p.ireductibil();
	return p;
}

Rational Rational::operator*(Rational& r)
{
    cout<< "(" << a << ", " << b << ") " << '*' << " (" << r.a << ", " << r.b << ") = ";
	Rational p;
	p.a=a*r.a;
	p.b=b*r.b;
	p.ireductibil();
	return p;
}
//-------------------------------------------------------//

//--------------------- COMPLEX -------------------------//
class Complex : public Pereche
{
	public:
	Complex(int=0,int=0);
	Complex getreal(){return a;}
	Complex getimaginar(){return b;}
	Complex operator+(Complex&);
	Complex operator*(Complex&);
};

inline Complex::Complex(int x,int y):Pereche(x,y)
{
	setPereche(x,y);
}

Complex Complex::operator+(Complex& c)
{
    cout<< "(" << a << ", " << b << ") " << '+' << " (" << c.a << ", " << c.b << ") = ";
	Complex p;
	p.a=a+c.a;
	p.b=b+c.b;
	return p;
}

Complex Complex::operator*(Complex& c)
{
    cout<< "(" << a << ", " << b << ") " << '*' << " (" << c.a << ", " << c.b << ") = ";
	Complex p;
	p.a=a*c.a-b*c.b;
	p.b=a*c.b+b*c.a;
	return p;
}
//-------------------------------------------------------//
//-------------- PUTERE --------------------------------//
class Putere : public Pereche
{
    public:
	Putere(int=0,long double=0.0);
    Putere getnr(){return a;}
	Putere getputere(){return b;}
	Putere operator+(Putere&);
	Putere operator*(Putere&);
	private:
    long double c;
    long double d;
};

inline Putere::Putere(int x,long double y):Pereche(x,y)
{
	setPereche(x,y);
}

Putere Putere::operator+(Putere& p)
{
    cout<< "(" << a << ", " << b << ") " << '+' << " (" << p.a << ", " << p.b << ") = ";
    Putere pt;
	pt.a=a;
	pt.c=(pow(a,b))+(pow(p.a,p.b));
	pt.d=log(a);
	pt.b=log(pt.c)/pt.d;
	return pt;
}
Putere Putere::operator*(Putere& p)
{
    cout << "(" << a << ", " << b << ") " << '*' << " (" << p.a << ", " << p.b << ") = ";
    Putere pt;
	pt.a=a;
	pt.c=(pow(a,b))*(pow(p.a,p.b));
	pt.d=log(a);
	pt.b=log(pt.c)/pt.d;
	return pt;

}

//-----------------------------------------------------//

int main()
 {
 Rational r1(3, 14), r2(2, 7);
 cout << "Rational: ";
 cout << r1 + r2 << endl;
 cout << "Rational: " ;
 cout << r1 * r2 << endl;
 Complex c1(3, 14), c2(2, 7);
 cout << "Complex: " ;
 cout << c1 + c2 << endl;
 cout << "Complex: " ;
 cout << c1 * c2 << endl;
 Putere p1(3, 14), p2(2, 7);
 cout << "Putere: ";
 cout << p1 + p2 << endl;
 cout << "Putere: " ;
 cout << p1 * p2 << endl;
 return 0;
 }
