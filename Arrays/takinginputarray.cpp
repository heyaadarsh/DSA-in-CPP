#include <iostream>
using namespace std;

void dispArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i];
    }
}

int main(){

    int arr[100];

    int size;
    cout<<"Enter the array size ";
    cin>>size;

    cout<<"Enter the array elements ";

    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }

    dispArray(arr, size);

}