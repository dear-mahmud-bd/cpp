#include<iostream>
#include<cmath>
using namespace std;

// Check Prime number ...
bool isPrime(int num){
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num%i==0){
            return false;
        }
    }
    return true;
}
// fibonacci ...
void fibonacci(int n){
    int t1=0,t2=1,nextNum;
    for (int i = 1; i <= n; i++)
    {
        cout<<t1<<" ";
        nextNum=t1+t2;
        t1=t2;
        t2=nextNum;
    }
    return;
}
int main(){
    // Check Prime number ...
    int a,b;
    cin>>a>>b;
    cout<<endl;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i)){
            cout<<i<<endl;
        }
    }

    // fibonacci
    int nf;
    cin>>nf;
    fibonacci(nf);



    return 0;
}