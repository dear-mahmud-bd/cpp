#include<iostream>
using namespace std;

int main(){
    int n, i;
    cout<<"The number of element is : ";
    cin>>n;
    cout<<"Numbers are : ";
    int arr[n];
    for ( i = 0; i < n; i++){
        cin>>arr[i];
    }
    int counter = 1;
    while (counter < n){
        for ( i = 0; i < n-counter; i++){
            // 12 39 29 82 23 6
            if (arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    for ( i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}