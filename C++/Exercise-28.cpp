#include <iostream>
#include <string>

using namespace std;

 class Grupa{
    public:
    Grupa(string , string);
    string getFacultate(){
                   return facultate;
                }
   string getCod(){
             return cod;
          }
    void setFacultate(string f){
                                         facultate = f;
                                       }
    void setCod(string c){
                             cod = c;
                           }
    private:
    string facultate;
    string cod;
};

Grupa::Grupa(string f, string c)
{
    facultate = f;
    cod = c;
}

 class Student{
    public:
    Student(Grupa gr,string);

    string getNume(){
                return nume;
             }
    Grupa getG(){
                   return g;
                }
   void setG(Grupa gp){
                        g = gp;
                      }
    private:
    string nume;
    Grupa g;
};

Student::Student(Grupa gr, string n) : g(gr)
{
    nume = n;
}

 ostream& operator<<(ostream& o, Grupa g){

   o << "Facultate " << g.getFacultate() << "; Cod: " << g.getCod() << ";";
    return o;

}

 ostream& operator<<(ostream& o, Student s){

   o << "Nume: " << s.getNume() << endl << "Facultate: " <<s.getG().getFacultate() << "; Cod: " << s.getG().getCod() << ";";
    return o;

}


int main()
{
    Grupa g1("IESC", "4781");
    Grupa g2("IESC", "4782");
    Student s1(g1, "Dan Popescu");
    Student s2(g1, "Vlad Ionescu");
    Student s3(g2, "Ioana Vasilescu");
    cout << s3.getG().getCod() << endl;
    Grupa g3 = s3.getG();
    g3.setCod("4781");
    s3.setG(g3);
    cout << s3.getG().getCod() << endl << endl;
    cout << g1 << endl << endl
     << g2 << endl << endl
     << s1 << endl << endl
     << s2 << endl << endl
    << s3 << endl;
    return 0;
}
