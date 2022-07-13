#include<iostream>
#include<climits>
using namespace std;
int main(){
    // // posible all sub array ...
    // int n1;
    // cin>>n1;
    // int arr1[n1];
    // for (int i = 0; i < n1; i++){
    //     cin>>arr1[i];
    // }
    // for (int i = 0; i < n1; i++){
    //     for (int j = i; j < n1; j++){
    //         for (int k = i; k <= j; k++){
    //             cout<<arr1[k]<< " ";
    //         }cout<<endl;
    //     }
    // }

    // // max sub array sum ...-time O(ne3)
    // int n2;
    // cin>>n2;
    // int arr2[n2];
    // for (int i = 0; i < n2; i++){
    //     cin>>arr2[i];
    // }
    // int maxSum = INT_MIN;
    // for (int i = 0; i < n2; i++){
    //     for (int j = i; j < n2; j++){
    //         int sum = 0;
    //         for (int k = i; k <= j; k++){
    //             sum += arr2[k];
    //         }
    //         maxSum = max(maxSum,sum);
    //     }
    // }
    // cout<<maxSum<<endl;

    // max sub array sum ...-time O(n+ne2)
    int n3;
    cin>>n3;
    int arr3[n3];
    for (int i = 0; i < n3; i++){
        cin>>arr3[i];
    }
    int currSum[n3+1];
    currSum[0] = 0;
    for (int i = 1; i <= n3; i++){
        currSum[i] = currSum[i-1] + arr3[i-1];
    }
    int maxSum = INT_MIN;
    for (int i = 1; i <= n3; i++){
        int sum = 0;
        for (int j = 0; j < i; j++){
            sum = currSum[i] - currSum[j];
            maxSum = max(maxSum,sum);
        }
    }
    cout<<maxSum<<endl;
    

    return 0;
}