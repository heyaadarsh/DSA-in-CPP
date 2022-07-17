#include <iostream>
using namespace std;

int printMax(int arr[], int size){
    int max = INT_MIN;

    for(int i = 0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int printMin(int arr[], int size){
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){

    int size;
    cin>>size;

    int num[100];
    for (int i = 0; i<size; i++){
        cin>>num[i];
    }

    cout<<"Max number of the array is "<<printMax(num, size)<<endl;
    cout<<"Min num of the array is "<<printMin(num, size)<<endl;

}