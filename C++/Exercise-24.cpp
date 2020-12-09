#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class String
{
        char str[20];
        public:

          void getdata()
        {
             gets(str);

        }

         int operator ==(String s)
        {
               if(!strcmp(str,s.str))
                return 1;

                return 0;
        }
};

int main()
{
        String s1,s2;

        cout<<"Introduceti primul sir: ";
        s1.getdata();
        cout<<"\nIntroduceti al doilea sir: ";
        s2.getdata();
        if(s1==s2)
        {
            cout<<"\nSirurile sunt egale\n";
        }
        else
        {
            cout<<"\nSirurile nu sunt egale\n";
        }

        return 0;
}
