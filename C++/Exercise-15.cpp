#include <iostream>
using namespace std;

int main()
{
    int a[5][5], trans[5][5], r, c, i, j;

    cout << "Numarul de linii: ";
    cin >> r;
    cout << "Numarul de coloane: ";
    cin >> c;

    cout<<"\nIntroduceti elementele matricii: \n";

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;++j)
        {
            cout<<"\na["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }

    }
    // Displaying the matrix a[][]
    cout << "\n Matricea a: \n" << endl;
    for (i = 0; i < r; ++i)
        {
            for (j = 0; j < c; ++j)
            {
                cout<<"\t"<<a[i][j];
            }
            printf("\n\n");
        }


    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            trans[j][i]=a[i][j];
        }

    cout << endl << "Transpusa matricii: " << endl;
    for (i = 0; i < r; ++i)
        {
            for (j = 0; j < c; ++j)
            {
                cout<<"\t"<<trans[i][j];
            }
            printf("\n\n");
        }

    return 0;
}
