#include <iostream>
using namespace std;

class secondHighest
{

int max;
public:
    int maxElement(int arr[], int size)
    {
        max = INT_MIN;

        for (int i = 0; i < size; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }

    int max2nd(int arr[], int size)
    {
        int max2nd = INT_MIN;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > max2nd && arr[i] != max)
            {
                max2nd = arr[i];
            }
        }
        return max2nd;
    }
};

int main()
{

    secondHighest A;

    int arr[100] = {-12, 26, 39, 54, 0, 26};

    A.maxElement(arr, 6);

    cout<<"The second highest element of the array is "<<A.max2nd(arr, 6)<<endl;

}