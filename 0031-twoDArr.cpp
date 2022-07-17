#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int arr[a][b];
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Matrix is- "<<endl;
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }

    // Found an element ...
    int x;
    cin>>x;
    bool value=false;
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            if(arr[i][j]==x){
                cout<<i+1<<" "<<j+1<<endl;
                value = true;
            }
        }
    }
    if (value){
        cout<<"Element is found"<<endl;
    }else{
        cout<<"Element is not found"<<endl;
    }

    return 0;
}