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

    // Spiral order print ...
    int rowStart = 0;
    int rowEnd = a-1;
    int columnStart = 0;
    int columnEnd = b-1;
    while (rowStart<=rowEnd && columnStart<=columnEnd){
        // for rowStart ...
        for (int col = columnStart; col <= columnEnd; col++){
            cout<<arr[rowStart][col]<<" ";
        }
        rowStart++;
        // for columnEnd ...
        for (int row = rowStart; row <= rowEnd; row++){
            cout<<arr[row][columnEnd]<<" ";
        }
        columnEnd--;
        // for rowEnd ...
        for (int col = columnEnd; col >= columnStart; col--){
            cout<<arr[rowEnd][col]<<" ";
        }
        rowEnd--;
        // for columnStart ...
        for (int row = rowEnd; row >= rowStart; row--){
            cout<<arr[row][columnStart]<<" ";
        }
        columnStart++;
    }
    
    return 0;
}