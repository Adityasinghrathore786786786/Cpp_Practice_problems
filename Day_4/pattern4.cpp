#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            if(j%2==1){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
            
        }
        cout<<endl;
    }
}