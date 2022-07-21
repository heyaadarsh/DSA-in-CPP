#include <iostream>
using namespace std;
class insertionSortingArray
{
    public:
        void insertionSort(int arr[], int n)
        {
            int i, key, j;
            for (i = 1; i < n; i++)
            {
                key = arr[i];
                j = i - 1;

                while (j >= 0 && arr[j] > key)
                {
                    arr[j + 1] = arr[j];
                    j = j - 1;
                }
                arr[j + 1] = key;
            }
        }

        void printArray(int arr[], int n)
        {
            int i;
            for (i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
};

int main()
{
    insertionSortingArray A1;
    int arr[] = {12, 11, 13, 5, 6};
    int N = sizeof(arr) / sizeof(arr[0]);

    A1.insertionSort(arr, N);
    A1.printArray(arr, N);

    return 0;
}
