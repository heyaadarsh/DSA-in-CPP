#include <iostream>
using namespace std;

// void swp(int a, int b){
//     int c = b;
//     b = a;
//     a = b;    
// }

    void displayArray(int arr[], int size){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void selectionSort(int arr[], int size){
        cout << "Here" << endl;
        for(int i = 0; i<size-1; i++){
            int minIndex = i;
            for(int j = 1; j<size; j++){
                
                if(arr[j]<arr[minIndex]){
                    minIndex = j;
                }
                // swap(arr[minIndex],arr[i]);
            }
            swap(arr[minIndex],arr[i]);
            cout << "Here" << endl;
            
        }
        displayArray(arr, size);
    }

int main(){

    int arr[5] = {63, 24, 56, -96, 0};

    
    selectionSort(arr, 5);
    displayArray(arr, 5);

}