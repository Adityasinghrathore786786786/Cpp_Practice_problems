#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;

    for(int i=1; i<=n; i++){
        //for space 
        for(int sp = 1; sp<= (n-i); sp++){
            cout<<" ";
        }
        //for star
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}