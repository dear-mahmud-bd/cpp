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
void fibonacci(int numb){
    int t1=0,t2=1,nextNum;
    for (int i = 1; i <= numb; i++)
    {
        cout<<t1<<" ";
        nextNum=t1+t2;
        t1=t2;
        t2=nextNum;
    }
    return;
}
// factorial and nCr ...
int fact(int number){
    int factorial=1;
    for (int i = 1; i <= number; i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}



int main(){
    // Check Prime number ...
    int a,b;
    cout<<"Prime number between two number : ";
    cin>>a>>b;
    cout<<endl;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i)){
            cout<<i<<endl;
        }
    }

    // fibonacci ...
    int nf;
    cout<<"For Fibonacci : ";
    cin>>nf;
    fibonacci(nf);
    cout<<endl;

    // factorial ...
    int nfac;
    cout<<"For Factorial : ";
    cin>>nfac;
    int ans = fact(nfac);
    cout<<ans<<endl;

    // Calculate nCr ...
    int n,r;
    cout<<"For Calculate nCr : ";
    cin>>n>>r;
    int answer = fact(n)/fact(r)*fact(n-r);
    cout<<answer<<endl;

    return 0;
}