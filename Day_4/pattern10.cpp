#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        //for space 
        for(int sp=1; sp<=(n-i); sp++){
            cout<<" ";
        }
        //for stars
        for(int j=1; j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
}