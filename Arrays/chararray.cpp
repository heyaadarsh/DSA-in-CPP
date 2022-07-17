#include <iostream>
using namespace std;

// void printCharArray(char arr, int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }

int main(){

    char ch[5] = {'a', 'b', 'c', 'm', 'n'};
    // printCharArray(ch, 5);
    int size = 5;
    for(int i=0; i<size; i++){
        cout<<ch[i]<<" ";
    }
}