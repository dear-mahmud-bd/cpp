#include <iostream>
using namespace std;
int main()
{
    int i = 4, j = 6, k;
    //  4     3       5     6     3   6       4   5
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout << i << endl;
    cout << j << endl;
    cout << k << endl;

    return 0;
}