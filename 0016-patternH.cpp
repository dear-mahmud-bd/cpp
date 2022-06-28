#include <iostream>
using namespace std;
int main()
{
    // Palindrom 
    int num, row,col;
    cout<<"Enter any Integer : "<<endl;
    cin>>num;
    for ( row = 1; row <= num; row++)
    {
        for ( col = 1; col <= num-row; col++)
        {
            cout<<"  ";
        }
        for ( col = 1; col <= row; col++)
        {
            cout<<col<<" ";
        }
        // 2 nd part
        for ( col = row-1; col >= 1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    // Romboses ...
    int num1,row1,col1;
    cout<<"Enter any Number : ";
    cin>>num1;
    cout<<endl;
    for ( row1 = 1; row1 <= num1; row1++)
    {
        for ( col1 = 1; col1 <= num1-row1; col1++)
        {
            cout<<"  ";
        }
        for ( col1 = 1; col1 <= num1; col1++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    // dimond patern ...
    int num2, row2, col2;
    cout << "Enter any Number : ";
    cin >> num2;
    cout << endl;
    for (row2 = 1; row2 <= num2; row2++){
        for (col2 = 1; col2 <= num2 -row2; col2++){
            cout<<" ";
        }
        for ( col2 = 1; col2 <= row2; col2++){
            if(col2==1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        for ( col2 = row2-1; col2 >= 1; col2--){
            if(col2==1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    for ( row2 = num2-1; row2 >= 1; row2--){
        for (col2 = 1; col2 <= num2 -row2; col2++){
            cout<<" ";
        }
        for ( col2 = 1; col2 <= row2; col2++){
            if(col2==1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        for ( col2 = row2-1; col2 >= 1; col2--){
            if(col2==1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}