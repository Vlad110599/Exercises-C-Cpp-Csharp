#ifndef TIME2_H
#define TIME2_H
class Time
{
 public:
 Time(int = 0, int = 0, int = 0); //constructor
 void setTime(int, int, int); //asignarea valorilor
 void printShort(); //tiparire in format scurt
 void printLong (); //tiparire in format lung
 void tick();
 private:
 int hour; //0-23
 int minute; //0-59
 int second; //0-59
};
#endif
