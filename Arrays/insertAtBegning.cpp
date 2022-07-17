#include <iostream>
using namespace std;

class begInsert{
    public:
        void display(int arr[], int size){
            for(int i=0; i<size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        void insert(int arr[], int size, int num){
            for(int i = size; i>=0; i--){
                arr[i+1] = arr[i];
            }
            arr[0] = num;
            display(arr, size + 1);
        }

};

int main(){

    begInsert A;

    int size, num;
    cout<<"Enter the size of the array "<<endl;
    cin>>size;


    int arr[100];

    for (int i=0; i<size; i++){
        cout<<"Enter the elements"<<endl;
        cin>>arr[i];
    }

    cout<<"Array before inserting the element "<<endl;
    A.display(arr, size);

    cout<<"Enter the num to insert "<<endl;
    cin>>num;

    cout<<"Array after insertion of the element is "<<endl;
    A.insert(arr, size, num);


}