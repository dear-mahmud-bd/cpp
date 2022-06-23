#include <iostream>
using namespace std;
int main()
{
    int date, pocketMoney = 5000;
    for (date = 0; date <= 30; date++)
    {
        if (date % 2 == 0)
        {
            continue;
        }
        if (pocketMoney == 0)
        {
            break;
        }
        pocketMoney = pocketMoney - 500;
        cout << "Go out Today" << endl;
        cout << date << endl;
    }

    return 0;
}