#include <iostream>
using namespace std;
int main()
{
    int col, row, i, j;
    cout << "Enter Coloum and Row : " << endl;
    cin >> col >> row;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    int col1, row1, k, l;
    cout << "Enter Coloum and Row : " << endl;
    cin >> col1 >> row1;
    for (k = 1; k <= row1; k++)
    {
        for (l = 1; l <= col1; l++)
        {
            if (k == 1 || k == row1)
            {
                cout << "* ";
            }
            else if (l == 1 || l == col1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}