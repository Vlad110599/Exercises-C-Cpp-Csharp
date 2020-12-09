#include<iostream>
using namespace std;
class student
{
        private:
                char nume[20],grupa[10],profil[10];
                int sem;
        public:
                void input();
                void display();


};
void student::input()
{
        cout<<"Nume:";
        cin>>nume;
        cout<<"Grupa:";
        cin>>grupa;
        cout<<"Profil:";
        cin>>profil;
        cout<<"Sem:";
        cin>>sem;
}
void student::display()
{
        cout<<"\nNume:"<<nume;
        cout<<"\nGrupa:"<<grupa;
        cout<<"\nProfil:"<<profil;
        cout<<"\nSem:"<<sem;
}
int main()
{
        student s;
        s.input();
        s.display();
}
