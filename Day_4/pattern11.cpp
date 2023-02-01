#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //for upper part

    for(int i=1; i<=n; i++){
        for(int sp=1; sp<=(n-i); sp++){
            cout<<" ";
        }
        for(int j=1; j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //for lower part
    for(int i=(n-1); i>=1; i--){
    
    //for space
    for(int sp=1; sp<=(n-i); sp++){
        cout<<" ";
    }

    //for star
    for(int j=1; j<=(2*i-1); j++){
        cout<<"*";
    }
    
    cout<<endl;
    }

}