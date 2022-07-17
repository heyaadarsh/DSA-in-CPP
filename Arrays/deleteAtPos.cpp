#include <iostream>
using namespace std;

class deleteElement
{
public:
    void display(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deletePos (int arr[], int size, int pos)
    {
        for (int i = pos; i<=size; i++)
        {
            arr[i - 1] = arr[i];
        }
        display(arr, size - 1);
    }
};

int main()
{

    deleteElement A;

    int size, pos;
    cout << "Enter the size of the array " << endl;
    cin >> size;

    cout << "Enter the elemnents of the array" << endl;
    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout<<"Enter the position to delete"<<endl;
    cin>>pos;

    cout << "Array before deletion is" << endl;
    A.display(arr, size);

    cout << "Array after deletion is" << endl;
    A.deletePos(arr, size, pos);
}