#include <iostream>
using namespace std;

  void displayArray(int arr[], int size){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

void bubbleSorting(int arr[], int size){
    for(int i=1; i<size; i++){
        for(int j=0; j<size-i; j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);

            }
        }
    }
    displayArray(arr, size);
}

int main(){

    int arr[5] = {63, 24, 56, -96, 0};

    
    bubbleSorting(arr, 5);
    displayArray(arr, 5);

}