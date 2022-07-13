#include<bits/stdc++.h>
using namespace std;
int main(){
    // First reapiting element ...
    int n1;
    cin>>n1;
    int a[n1];
    for (int i = 0; i < n1; i++){
        cin>>a[i];
    }
    const int N = 1e6+2;
    int idx[N];
    for (int i = 0; i < N; i++){
        idx[i] = -1;
    }
    int minIndex = INT_MAX;
    for (int i = 0; i < n1; i++){
        if(idx[a[i]] != -1){
            minIndex = min(minIndex, idx[a[i]]);
        }else{
            idx[a[i]]= i;
        }
    }
    if(minIndex == INT_MAX){
        cout<<"-1"<<endl;
    }else{
        cout<<minIndex<<endl;
    }

    // Subarray  with given sum ...
    int n, s;
    cin>>n>>s;
    int ar[n];
    for (int i = 0; i < n; i++){
        cin>>ar[i];
    }
    int i=0, j=0, st=-1, en=-1, sum = 0;
    while (j<n && sum+ar[j]<=s){
        sum+=ar[j];
        j++;
    }
    if (sum == s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while (j<n){
        sum+=ar[j];
        while (sum > s){
            sum-=ar[i];
            i++;
        }
        if(sum == s){
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;

    // Smallest missing number in array ...
    int num;
    cin>>num;
    int arr[num];
    for (int i = 0; i < num; i++){
        cin>>arr[i];
    }
    const int N = 1e6 + 2;
    bool check[N];
    for (int i = 0; i < N; i++){
        check[i] = 0;
    }
    for (int i = 0; i < num; i++){
        if(arr[i]>=0){
            check[arr[i]] = 1;
        }
    }
    int ans = -1;
    for (int i = 0; i < N; i++){
        if(check[i] == 0){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}