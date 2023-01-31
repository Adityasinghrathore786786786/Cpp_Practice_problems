// program for swapping alternate in array

#include<iostream>
using namespace std;

int swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
    return 0;
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i] <<" ";
    }
}

int main(){

    int arr1[5]= {1, 2, 3, 4 ,5};
    int arr2[6]={2, 4, 6, 8, 10, 12};
    swapAlternate(arr1, 5);
    printArray(arr1, 5);
    cout<<endl;

    swapAlternate(arr2, 6);
    printArray(arr2, 6);
    return 0;
}
