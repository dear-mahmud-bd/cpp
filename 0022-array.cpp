#include <iostream>
using namespace std;

int main(){
    int array1[4] = {10,20,30,40};
    cout<<"In array1 element : ";
    cout<<array1[3]<<endl;
    
    // user define array ...
    int n, array2[n], i;
    cout<<"Enter array2 n : ";
    cin>>n;
    for (i = 0; i < n; i++){
        cin>>array2[i];
    }
    for (i = 0; i < n; i++){
        cout<<array2[i]<<" ";
    }
    cout<<endl;
    
    // check bigger or smaller number ...
    int big,small;
    big = array2[0];
    small = array2[0];
    for ( i = 1; i < n; i++){
        if(big < array2[i]){
            big = array2[i];
        }
        small = min(small,array2[i]); // built in function ... 
    }
    cout<<"Big number is : "<<big<<endl;
    cout<<"Small number is : "<<small<<endl;
    
    return 0;
}