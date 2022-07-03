#include<iostream>
#include<cmath>
using namespace std;

// Binary to Decimal ...
int binaryToDecimal(int n1){
    int ans1=0,position=0,digit;
    while (n1>0)
    {
        digit=n1%10;
        ans1+=digit*pow(2,position);

        position++;
        n1/=10;
    }
    return ans1;
}

int main(){
    // Binary to Decimal ...
    int n1;
    cout<<"Enter Binary Number : ";
    cin>>n1;
    cout<<"Decimal Number is = ";
    cout<< binaryToDecimal(n1)<<endl;

    return 0;
} 
