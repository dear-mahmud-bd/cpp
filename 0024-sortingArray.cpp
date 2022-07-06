#include<iostream>
using namespace std;

int main(){
    int n, i, j;
    cout<<"Enter the number of array : ";
    cin>>n;
    int arr[n];
    cout<<"Elements are : ";
    for ( i = 0; i < n; i++){
        cin>>arr[i];
    }
    for ( i = 0; i < n-1; i++){
        for ( j = i+1; j < n; j++){
            // 5 6 4 7 3 1 2
            if (arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for ( i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}