#include<iostream>
using namespace std;

int main(){
    int n, i, j;
    cout<<"The number of array : ";
    cin>>n;
    int arr[n];
    cout<<"Array elements are : ";
    for ( i = 0; i < n; i++){
        cin>>arr[i];
    }
    for ( i = 1; i < n; i++){
        int current = arr[i];
        j = i-1;
        while (arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    for ( i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}