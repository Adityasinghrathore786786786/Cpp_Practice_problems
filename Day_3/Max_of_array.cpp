// maximum of array
#include<iostream>
#include<climits>
using namespace std;

int maxElement(int arr[], int size){
    int max = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i]> max){
            max=arr[i];
        }
    }
    return max;

}

int main(){
    int arr1[5]={1, 10, 99, 11, 14};
    int arr2[6]={10, 10, 9, 1, 1, 4};

    cout<<"Maximum of array is: "<<maxElement(arr1, 5)<<endl;
    cout<<"Maximum of array is: "<<maxElement(arr2, 6);
    return 0;
}