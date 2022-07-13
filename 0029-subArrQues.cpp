#include<iostream>
#include<climits>
using namespace std;
int main(){
    // posible all sub array ...
    int n1;
    cin>>n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++){
        cin>>arr1[i];
    }
    for (int i = 0; i < n1; i++){
        for (int j = i; j < n1; j++){
            for (int k = i; k <= j; k++){
                cout<<arr1[k]<< " ";
            }cout<<endl;
        }
    }
    return 0;
}