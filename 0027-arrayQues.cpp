#include<bits/stdc++.h>
using namespace std;
int main(){

    // Max till i ...
    int n1;
    cin>>n1;
    int arr[n1];
    for (int i = 0; i < n1; i++){
        cin>>arr[i];
    }
    int hight=arr[0];
    for (int i = 0; i < n1; i++){
        if (arr[i] > hight){
            hight = arr[i];
            arr[i]=hight;
        }else{
            arr[i]=hight;
        }
    }
    for (int i = 0; i < n1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Sum of sub Array
    int num;
    cin>>num;
    int arra[num];
    for (int i = 0; i < num; i++){
        cin>>arra[i];
    }
    int currSum = 0;
    for (int i = 0; i < num; i++){
        currSum = 0;
        for (int j = i; j < num; j++){
            currSum += arra[j];
            cout<< currSum << " ";
        }
        cout<<endl;
    }
    
    // Maximum Arethmetic SubArray Length ...
    int number;
    cin>>number;
    int array[number];
    for (int i = 0; i < number; i++){
        cin>>array[i];
    }
    int ans = 2;
    int previousCommonDiff = array[1]-array[0];
    int j = 2;
    int current = 2;
    while (j<number){
        if (previousCommonDiff == array[j]-array[j-1]){
            current++;
        }else{
            previousCommonDiff = array[j]-array[j-1];
            current=2;
        }
        ans = max(ans, current);
        j++;
    }
    cout<<ans<<endl;
    
    //  Record Breaking Days ...
    int n;
    cin>>n;
    int a[n+1];
    a[n] = -1;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    if (n==1){
        cout<<n<<endl;
        return 0;
    }
    int mx = -1;
    int answer = 0;
    for (int i = 0; i < n; i++){
        if (a[i]>mx && a[i]>a[i+1]){
            answer++;
        }
        mx = max(mx, a[i]);
    }
    cout << answer << endl;

    return 0;
}