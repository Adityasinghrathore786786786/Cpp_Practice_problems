#include<iostream>
using namespace std;
int totOccu(int arr[], int size, int key){
    int count =0;
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            count++;
        }
    }
    return count;
}

int main(){
    int arr1[7] ={1, 2, 7, 4, 7, 7, 6};
    cout<<"Total occurance "<<totOccu(arr1, 7, 2);
    return 0; 
}