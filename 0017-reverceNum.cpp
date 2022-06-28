#include <iostream>
using namespace std;
int main()
{
    int num,reverce=0,lastdigit;
    cout<<"Enter number : ";
    cin>>num;
    while (num>0)
    {
        lastdigit=num%10;
        reverce= reverce*10+lastdigit;
        num=num/10;
    }
    cout<<"Reverce number is : ";
    cout<<reverce<<endl;
    
    return 0;
}
