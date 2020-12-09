#include<iostream>
using namespace std;

int main()
{

        int arr1[5][5], arr2[5][5], arr3[5][5], sub, i, j,m,n;

    cout<<"Introduceti marimea matricei: ";
    cin>>m;
    cout<<"\nIntroduceti elementele matricii arr1: \n";

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;++j)
        {
            cout<<"\narr1["<<i<<"]["<<j<<"] = ";
            cin>>arr1[i][j];
        }

    }

    cout<<"\nIntroduceti elementele matricii arr2: \n";

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;++j)
        {
            cout<<"\narr2["<<i<<"]["<<j<<"] = ";
            cin>>arr2[i][j];
        }

    }


        cout<<"\narr3 = arr1 + arr2 : \n";
        for(i=0; i<m; i++)
        {
                for(j=0; j<m; j++)
                {
                        arr3[i][j]=arr1[i][j]+arr2[i][j];
                }
        }

        cout<<"\narr3 = \n";

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < m; ++j)
            {
                cout<<"\t"<<arr3[i][j];
            }
            printf("\n\n");
        }

        return 0;
}
