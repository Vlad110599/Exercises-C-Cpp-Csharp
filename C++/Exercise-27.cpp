#include <iostream>
using std::cout;
#include "time2.h"
Time::Time(int hr, int min, int sec)
{
 setTime(hr, min, sec);
}
void Time::setTime(int h, int m, int s)
{
 hour = (h >= 0 && h < 24) ? h : 0;
 minute = (m >= 0 && m < 60) ? m : 0;
 second = (s >= 0 && s < 60) ? s : 0;
}
void Time::printShort()
{
 cout << (hour < 10 ? "0" : "") << hour << ":"
 << (minute < 10 ? "0" : "") << minute;
}
void Time::printLong()
{
 cout << ((hour == 0 || hour == 12) ?
 12 : hour % 12)
 << ":" << (minute < 10 ? "0" : "") << minute
 << ":" << (second < 10 ? "0" : "") << second
  << (hour < 12 ? " AM" : " PM");
}
#include <iostream>
using std::cout;
using std::endl;
#include "time2.h"
int main()
{
 Time t1, //toate argumentele implicite
 t2(2), //minute si second implicite
 t3(21, 34), //second implicit
 t4(23, 59, 59), //toate valorile specificate
 t5(27, 74, 99); //toate valorile eronate

 cout << "Obiect creat cu: " << endl;
 cout << "toate argumentele implicite: " << endl;
 t1.printShort();
 cout << endl << " ";
 t1.printLong();
 cout << "\nhour specificat; minute si second implicite:"
 << endl << " ";
 t2.printShort();
 cout << endl << " ";
 t2.printLong();

 cout << "\nhour si minute specificate; second implicit:"
 << endl << " ";
 t3.printShort();
 cout << endl << " ";
 t3.printLong();

 cout << "\nhour, minute si second specificate:"
 << endl << " ";
 t4.printShort();
 cout << endl << " ";
 t4.printLong();

 cout << "\nvalori invalide pentru hour, minute si second:"
 << endl << " ";
 t5.printShort();
 cout << endl << " ";
 t5.printLong();
 cout << endl;

 return 0;
}
