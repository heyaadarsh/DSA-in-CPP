#include <iostream>
using namespace std;
void printArray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {2,3,6,5,8};
    printArray(arr, 5);
}