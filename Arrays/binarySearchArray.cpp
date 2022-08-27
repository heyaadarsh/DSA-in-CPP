// #include <iostream>
// using namespace std;

// class BinarySearch{

//     public:

//     void findIndex(int arr[], int size, int key){
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end-start)/2;
//     bool found = 0;

//     while(start<=end){

//     if(arr[mid] == key){
//         cout<<"Element found at index "<<mid<<endl;
//         found = 1;

//     }

//     if(key>arr[mid]){
//         start = mid + 1;

//     }
//     else{
//         end = mid -1;
//     }

//     mid = start + (end-start)/2;
//     }
//     if(found==0){
//         cout<<"Element is not in the array"<<endl;
//     }
// }
    
// };


// int main(){

//     BinarySearch Arr;

//     int evenArray[6] = {2,5,8,14,17,22};
//     int oddArray[5] = {17,18,36,96,450};

//     Arr.findIndex(evenArray, 6, 7);

//     Arr.findIndex(oddArray, 5, 96);
// }

#include <iostream>
using namespace std;

void binarySrch(int arr[], int size, int key){
        bool found = 0;
        int start = 0;
        int end = size - 1;
        int mid = start + (end-start)/2;

        while(start<=end){
        if(arr[mid]==key){
            cout<<"Element found at pos "<<mid<<endl;
            found = 1;
        }
        if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
        }
        if(found==0){
            cout<<"element not found"<<endl;
        }
    }

int main(){

    int arr[5] = {2, 6, 9, 12, 38};

    binarySrch(arr, 5, 12);
    binarySrch(arr, 5, 38);
    binarySrch(arr, 5, 5);
    

}