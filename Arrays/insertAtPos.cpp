#include <iostream>
using namespace std;

void dispArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

void afterInsertion(int arr[], int size, int pos, int num){
    for(int i=size; i>=pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = num;
    dispArray(arr, size+1);
}

int main(){

    int size, pos, num;
    cout<<"Enter the size of the array "<<endl;
    cin>>size;

    int arr[100];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Array before insertion is"<<endl;
    dispArray(arr, size);

    cout<<"Enter the position to add "<<endl;
    cin>>pos;

    cout<<"Enter the num to add "<<endl;
    cin>>num;

    afterInsertion(arr, size, pos, num);
    
    

}


// #include <iostream>
// using namespace std;

// void printArray(int arr[], int size){
//     for (int i=0; i<size; i++){
//         cout<<arr[i]<<" "<<endl;
//     }
// }

// void insertAtpos(int arr[], int size, int pos, int num){
//     for(int i=size; i>=pos; i--){
//         arr[i+1] = arr[i];
//     }
//     arr[pos] = num;
//     printArray(arr, size+1);
// }



// int main(){

//     int arr[100];
//     int size, pos, num;
//     cin>>pos>>num>>size;
//     cout<<"Enter the elements of array"<<endl;
//     for (int i = 0; i<size; i++){
//         cin>>arr[i];
//     }

//     cout<<"array before insertion is: "<<endl;
//     printArray(arr,size);

//     insertAtpos(arr, size, pos, num);




// }