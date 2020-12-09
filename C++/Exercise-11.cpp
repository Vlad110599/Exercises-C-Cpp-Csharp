#include<iostream>
#include<string.h>
using namespace std;

int main()
{
   int i,count=0;
   char ch[50];

   cout<<"\nIntroduceti un sir: ";
   cin>>ch;

   for(i=0;ch[i]!='\0';i++)
   {
        count++;
   }
   cout<<"\nLungimea sirului "<<ch<<" este: "<<count<<"\n";

   return 0;
}
