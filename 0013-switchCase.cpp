#include <iostream>
using namespace std;
int main()
{
    char button;
    cout << "Enter a charecter : " << endl;
    cin >> button;

    switch (button)
    {
    case 'h':
        cout << "Hello" << endl;
        break;
    case 'a':
        cout << "Ailo" << endl;
        break;
    case 'c':
        cout << "Chalu" << endl;
        break;
    case 'g':
        cout << "Gello" << endl;
        break;
    case 'k':
        cout << "Kolo" << endl;
        break;
    case 't':
        cout << "Tolo" << endl;
        break;
    case 'z':
        cout << "Zailo" << endl;
        break;
    default:
        cout << "Learning" << endl;
        break;
    }

    return 0;
}