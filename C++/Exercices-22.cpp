#include<iostream>
using namespace std;

class patrat
{
   private:
        int n,r;
        float n1,r1;
        public:
                void input();
        void calc();
                void display();

};

inline void patrat::input()
{
        cout<<"Introduceti un numar intreg: ";
        cin>>n;
        cout<<"\nIntroduceti un numar zecimal: ";
        cin>>n1;


}

inline void patrat::calc()
{
        r=n*n;
        r1=n1*n1;
}

inline void patrat::display()
{
        cout<<"\nPatratul numarului "<<n<<" = "<<r<<"\n";
        cout<<"\nPatratul numarului "<<n1<<" = "<<r1<<"\n";
}

int main ()
{
        square s;
        s.input();
        s.calc();
        s.display();

        return 0;
}
