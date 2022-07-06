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

// Decimal to Hexadecimal ...
string decimalToHexadecimal(int n4){
    int x4=1;
    string ans4= "";
    while (x4<=n4)
        x4*=16;
        x4/=16;
    while (x4>0){
        int lastDigit = n4/x4;
        n4-=lastDigit*x4;
        x4/=16;
        if(lastDigit<=9){
            ans4 = ans4+to_string(lastDigit);
        }else{
            char c='A'+lastDigit-10;
            ans4.push_back(c);
        }
    }
    return ans4;
}

// Add two binary Number ...
int addTwoBinaryNum(int bi1, int bi2){
    int ans5 = 0, carry = 0, binaryAns = 0;
    while (bi1>0 && bi2>0){
        if(bi1%2==0 && bi2%2==0){
            ans5 = ans5*10 + carry;
            carry = 0;
        }else if ((bi1%2==0 && bi2%2==1)||(bi1%2==1 && bi2%2==0)){
            if(carry == 1){
                ans5 = ans5*10 + 0;
                carry = 1;
            }else{
                ans5 = ans5*10 + 1;
                carry = 0;
            }
        }else{
            ans5 = ans5*10 + carry;
            carry = 1;
        }
        bi1 /= 10;
        bi2 /= 10;
    }
    while (bi1 > 0){
        if (carry == 1){
            if(bi1%2 == 1){
                ans5 = ans5 + 0;
                carry = 1;
            }else{
                ans5 = ans5 + 1;
                carry = 0;
            }
        }else{
            ans5 = ans5*10 + (bi1%2);
        }
        bi1 /= 10;
    }
    while (bi2 > 0){
        if (carry == 1){
            if(bi2%2 == 1){
                ans5 = ans5 + 0;
                carry = 1;
            }else{
                ans5 = ans5 + 1;
                carry = 0;
            }
        }else{
            ans5 = ans5*10 + (bi2%2);
        }
        bi2 /= 10;
    }
    if (carry == 1){
        ans5 = ans5*10 + 1;
    }
    // actual answer ...
    while (ans5 > 0){
        int lastNumber = ans5 % 10;
        binaryAns = binaryAns*10 + lastNumber;
        ans5 /= 10;
    }
    return binaryAns;
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

    // Decimal to Hexadecimal ...
    int n4;
    cout<<"Enter Decimal Number : ";
    cin>>n4;
    cout<<"Hexadecimal Number is = ";
    // cout<< decimalToHexadecimal(n4)<<endl;

    // Adding two binary number ...
    int bi1,bi2;
    cout<<"Enter two binary number : ";
    cin>>bi1>>bi2;
    cout<< addTwoBinaryNum(bi1,bi2)<<endl;
    
    return 0;
} 
