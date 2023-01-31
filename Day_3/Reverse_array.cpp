#include<iostream>
using namespace std;


//reversing logic

int reverse(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
}
//for printing array

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr1[5]={1, 2 ,3 , 4, 5};
    int arr2[6]={2, 4 ,6 , 8, 10, 12};
    reverse(arr1, 5);
    printArray(arr1, 5);
    cout<<endl;

    reverse(arr2, 6);
    printArray(arr2, 6);
    return 0;
}