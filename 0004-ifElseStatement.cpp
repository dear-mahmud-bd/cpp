#include <iostream>
using namespace std;
int main()
{
    int saving;
    cin >> saving;

    if (saving > 1000)
    {
        if (saving > 2000)
        {
            cout << "Buy a new Brand Shirt";
        }
        else
        {
            cout << "Buy a simple Shirt";
        }
    }
    else if (saving > 500)
    {
        cout << "Buy a t-shirt";
    }
    else
    {
        cout << "Go to Home";
    }

    return 0;
}