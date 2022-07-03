#include<bits/stdc++.h>
#include<cmath>
using namespace std;

// Binary to Decimal ...
int binaryToDecimal(int n1){
    int ans1=0,position=0,digit;
    while (n1>0){
        digit=n1%10;
        ans1+=digit*pow(2,position);
        position++;
        n1/=10;
    }
    return ans1;
}

// Hexadecimal to Decimal ...
int hexadecimalToDecimal(string n2){
    int ans2=0,hex=1,s=n2.size();
    for (int i = s-1; i >= 0; i--){
        if(n2[i]>='0' && n2[i]<='9'){
            ans2+=hex*(n2[i]-'0');
        }else if(n2[i]>='A' && n2[i]<='F'){
            ans2+=hex*(n2[i]-'A'+10);
        }
        hex*=16;
    }
    return ans2;
}

// Decimal to Binary ...
int decimalToBinary(int n3){
    int ans3=0,position3=0,digit3;
    while(n3 != 0){
        digit3=n3%2;
        ans3+=digit3*pow(10,position3);
        position3++;
        n3/=2;
    }
    return ans3;
}

int main(){
    // Binary to Decimal ...
    int n1;
    cout<<"Enter Binary Number : ";
    cin>>n1;
    cout<<"Decimal Number is = ";
    cout<< binaryToDecimal(n1)<<endl;
    
    // Hexadecimal to Decimal ...
    string n2;
    cout<<"Enter Hexadecimal Number : ";
    cin>>n2;
    cout<<"Decimal Number is = ";
    cout<< hexadecimalToDecimal(n2)<<endl;
    
    // Decimal to Binary ...
    int n3;
    cout<<"Enter Decimal Number : ";
    cin>>n3;
    cout<<"Binary Number is = ";
    cout<< decimalToBinary(n3)<<endl;

    return 0;
} 