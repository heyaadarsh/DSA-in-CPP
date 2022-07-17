#include <iostream>
using namespace std;

bool keyFound(int arr[], int size, int key){
    for (int i=0; i<size; i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
}

int main(){

    int arr[10] = {4, -9, 52, 6, 9, -63, 5, 6, 3, 12};

    cout<<"enter the key to find"<<endl;
    int key;
    cin>>key;

    bool found = keyFound(arr, 10, key);

    if (found){
        cout<<key<<" is in the array"<<endl;
    }
    else{
        cout<<key<<" is not in the array";
    }

}