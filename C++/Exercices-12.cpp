#include<iostream>
#include<string.h>
using namespace std;

int main()
{
        char strs[100], countw=0, strw[15], i;
        cout<<"\nIntroduceti un sir: ";
        gets(strs);

        int len=strlen(strs);

        for(i=0; i<len; i++)
        {
                if(strs[i]==' ')
                {
                        countw++;
                }
        }
        cout<<"\nNumarul total de caractere este: "<<countw+1<<"\n";

        return 0;
}
