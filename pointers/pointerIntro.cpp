#include <iostream>
using namespace std;

int main(){
    
    int num = 7;
    int *ptr = &num;

    cout<<"The value of Integer using num is "<<num<<endl;
    cout<<"The value of integer using pointer is "<<*ptr<<endl;
    cout<<"The address of num using pointer is "<<ptr<<endl;

    char ch = 'H';
    char *ptr2 = &ch;

    cout<<"The value of Char using ch is "<<ch<<endl;
    cout<<"The value of char using pointer is "<<*ptr2<<endl;
    cout<<"The address of char using pointer is "<<ptr2<<endl;

    cout<<"Size of Integer is "<<sizeof(num)<<endl;
    cout<<"Size of char is "<<sizeof(ch)<<endl;
    cout<<"Size of pointer is "<<sizeof(ptr)<<endl;

}