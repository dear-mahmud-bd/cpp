#include <iostream>
using namespace std;
int main()
{
    // int col, row, i, j;
    // cout << "Enter Coloum and Row : " << endl;
    // cin >> col >> row;
    // for (i = 1; i <= row; i++)
    // {
    //     for (j = 1; j <= col; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // int col1, row1, k, l;
    // cout << "Enter Coloum and Row : " << endl;
    // cin >> col1 >> row1;
    // for (k = 1; k <= row1; k++)
    // {
    //     for (l = 1; l <= col1; l++)
    //     {
    //         if (k == 1 || k == row1 || l == 1 || l == col1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    int num,n,m;
    cout << "Enter an Integer : " << endl;
    cin >> num;
    cout<<endl;    
    for ( m = 1; m <= num; m++)
    {
        for ( n = 1; n <= m; n++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    



    return 0;
}