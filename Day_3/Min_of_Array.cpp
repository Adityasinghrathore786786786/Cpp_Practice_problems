// program to find minimum of array
#include<iostream>
#include<climits>
using namespace std;
int min_Element(int arr[], int size){
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int arr1[5]= {1, 2, 3, 4, 5};
    int arr2[6]= {-1, 2, 3, 4, 5, 10};

    cout<<"The minimum Element of the Array is: "<<min_Element(arr1, 5)<<endl;
    cout<<"The minimum Element of the Array is: "<<min_Element(arr2, 6);

}