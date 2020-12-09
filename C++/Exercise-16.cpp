#include<iostream>

using namespace std;

int main()
{
    int a[10][10],d1sum=0,d2sum=0,m,i,j;
    cout<<"Dimensiunea matricii: ";
    cin>>m;
    cout<<"\nIntroduceti elementele matricii: \n";

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;++j)
        {
            cout<<"\na["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }

    }

    cout<<"\nMatrice a: \n\n";
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < m; ++j)
            {
                cout<<"\t"<<a[i][j];
            }
        }



    for(i=0;i<m;++i)
        for(j=0;j<m;++j)
        {
            if(i==j)
                d1sum+=a[i][j];
            if(i+j==(m-1))
                d2sum+=a[i][j];
        }

    cout<<"\nSuma de pe diagonala 1 : "<<d1sum;
    cout<<"\n\nSuma de pe diagonala 2: "<<d2sum;

    return 0;
}
