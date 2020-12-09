#include<iostream>
#include<fstream>
using namespace std;

int main()
{
     ifstream fin("file.txt");

     int line=1,word=1,size;
     char ch;


     fin.seekg(0,ios::end);
     size=fin.tellg();

     fin.seekg(0,ios::beg);

     while(fin)
     {
      fin.get(ch);
      if(ch==' '||ch=='\n')
       word++;

      if(ch=='\n')
       line++;
     }

     cout<<"\nNumarul de linii = "<<line<<"\n\nNumarul de litere = "<<word;
     cout<<"\n\nMarimea textului ="<<size<<"\n";
     fin.close();

     return 0;

}
