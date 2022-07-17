#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size){
    int totalSum = 0;
    for(int i=0; i<size; i++){
        totalSum = totalSum + arr[i];
    }
    return totalSum;
}

int main(){

    int size;
    cin>>size;

    int arr[100];
    // int sum = 0;
    for (int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Sum of the elements of the array is "<<sumOfArray(arr, size)<<endl;

}