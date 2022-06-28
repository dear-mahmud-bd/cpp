#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Reverce Number ...
    int num, reverce = 0, lastdigit;
    cout << "Enter number : ";
    cin >> num;
    while (num > 0)
    {
        lastdigit = num % 10;
        reverce = reverce * 10 + lastdigit;
        num = num / 10;
    }
    cout << "Reverce number is : ";
    cout << reverce << endl;
    cout << endl;

    // Armstrong Number ...
    int num1,inputNum1, sum1 = 0, lastdigit1;
    cout << "Enter number : ";
    cin >> num1;
    inputNum1=num1;
    while (num1 > 0)
    {
        lastdigit1 = num1 % 10;
        sum1 += pow(lastdigit1, 3);
        num1 = num1 / 10;
    }
    if(inputNum1==sum1){
        cout<<"It is Armstrong Number";
    }else{
        cout<<"It is Not Armstrong Number";
    }

    return 0;
}
