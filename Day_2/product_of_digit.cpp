#include<iostream>
using namespace std;

int main(){

    int n;
    int product=1;
    cout<<"Enter a number to find its digits product "<<endl;

    cin>>n;

    while(n!=0){
        int digit= n%10;
        product = product*digit;
        n=n/10;
    }

    cout<<"Product is : "<<product;
}