#include<iostream>
using namespace std;
int uniqueOccurence(int arr[], int size){
    int ans=0;

    for(int i=0; i<size; i++){

        ans = ans^arr[i];

    }
    return ans;
}

int main(){
    int arr1[7]= {1, 1, 2, 2, 3, 3, 5};

    cout<<"The unique Number is : "<<uniqueOccurence(arr1, 7);
}