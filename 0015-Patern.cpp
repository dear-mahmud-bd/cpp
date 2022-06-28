#include <iostream>
using namespace std;
int main()
{
    // Row and Col print
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

    // Hollow pattern
    int col1, row1, k, l;
    cout << "Enter Coloum and Row : " << endl;
    cin >> col1 >> row1;
    for (k = 1; k <= row1; k++)
    {
        for (l = 1; l <= col1; l++)
        {
            if (k == 1 || k == row1 || l == 1 || l == col1)
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

    // half piramid
    int num,m,n;
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

    // half piramid (right side alignment)
    int num1, o, p;
    cout << "Enter an Integer : " << endl;
    cin >> num1;
    cout << endl;
    for (o = 1; o <= num1; o++)
    {
        for (p = 1; p <= num1; p++)
        {
            if (p <= num1 - o)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    // half piramid with Number
    int num2,q,r;
    cout << "Enter an Integer : " << endl;
    cin >> num2;
    cout<<endl;    
    for ( q = 1; q <= num2; q++)
    {
        for ( r = 1; r <= q; r++)
        {
            cout<<q<<" ";
        }
        cout<<endl;
    }
    
    // half pitamid with 1,2,3,4,5,6,7,...
    int num3,s,t,count=1;
    cout << "Enter an Integer : " << endl;
    cin >> num3;
    cout<<endl;
    for ( s = 1; s <= num3; s++)
    {
        for ( t = 1; t <= s; t++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    
    // butter fly pattern
    int num4,u,v;
    cout<<"Enter an Integer : "<<endl;
    cin>>num4;
    cout<<endl;
    for ( u = 1; u <= num4; u++)
    {
        for ( v = 1; v <= u; v++)
        {
            cout<<"* ";   
        }
        int space=2*num4 - 2*u;
        for ( v = 1; v <= space; v++)
        {
            cout<<"  ";
        }
        for ( v = 1; v <= u; v++)
        {
            cout<<"* ";   
        }
        cout<<endl;
    }
    for ( u = num4; u >= 1; u--)
    {
        for ( v = 1; v <= u; v++)
        {
            cout<<"* ";   
        }
        int space=2*num4 - 2*u;
        for ( v = 1; v <= space; v++)
        {
            cout<<"  ";
        }
        for ( v = 1; v <= u; v++)
        {
            cout<<"* ";   
        }
        cout<<endl;
    }

    return 0;
}