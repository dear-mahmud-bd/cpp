#include<iostream>
#include<cmath>
using namespace std;

bool check(int x, int y, int z){
    int a= max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }else if(a==y){
        b=x;
        c=z;
    }else{
        b=x;
        c=y;
    }
    // check the vaue ...
    if(a*a==b*b+c*c){
        return true;
    }else{
        return false;
    }
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if (check(x,y,z)){
        cout<<"Pythagorean Triplet"<<endl;
    }else{
        cout<<"Not Pythagorean Triplate"<<endl;
    }

    return 0;
}