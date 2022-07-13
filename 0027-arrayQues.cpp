#include<bits/stdc++.h>
using namespace std;
int main(){

    // // Max till i ...
    // int n;
    // cin>>n;
    // int arr[n];
    // for (int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }
    // int max=arr[0];
    // for (int i = 0; i < n; i++){
    //     if (arr[i] > max){
    //         max = arr[i];
    //         arr[i]=max;
    //     }else{
    //         arr[i]=max;
    //     }
    // }
    // for (int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }

    // // Sum of sub Array
    // int num;
    // cin>>num;
    // int arra[num];
    // for (int i = 0; i < num; i++){
    //     cin>>arra[i];
    // }
    // int currSum = 0;
    // for (int i = 0; i < num; i++){
    //     currSum = 0;
    //     for (int j = i; j < num; j++){
    //         currSum += arra[j];
    //         cout<< currSum << " ";
    //     }
    // }
    
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
    

    return 0;
}