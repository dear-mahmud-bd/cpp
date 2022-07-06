#include<iostream>
using namespace std;

// linear Searching ...
int linearSearch(int arr1[], int n1, int key1){
    for (int i = 0; i < n1; i++){
        if(arr1[i]==key1){
            return i;
        }
    }
    return -1;
}
// binary Searching ...
int binarySearch(int arr1[], int n1, int key1){
    int start = 0, end = n1;
    while (start <= end){
        // 12 23 29 32 39 46 54 82 88 99
        int middle = (start+end)/2;
        if (arr1[middle] == key1){
            return middle;
        }else if(arr1[middle] > key1){
            end = middle-1; 
        }else{
            start = middle+1;
        }
    }
    return -1;
}

int main(){
    int n1, arr1[n1], i, key1;
    cout<<"Enter the number of element in a array : ";
    cin>>n1;
    for ( i = 0; i < n1; i++){
        cin>>arr1[i];
    }
    cout<<"Enter the Search key1 : ";
    cin>>key1;
    cout<<"Linear Search result : ";
    cout<<linearSearch(arr1,n1,key1)<<endl;
    cout<<"Binary Search result : ";
    cout<<binarySearch(arr1,n1,key1)<<endl;

    return 0;
}