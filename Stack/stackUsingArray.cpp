#include <iostream>
using namespace std;
class Stack{
    private:
        int *data;
        int nextIndex;
        int capacity;
    
    public:
        Stack(int totalSize){
            data = new int[totalSize];
            nextIndex = 0;
            capacity = totalSize;
        }

        int size(){
            return nextIndex;
        }

        bool isEmpty(){
            return nextIndex==0;
        }

        void push(int element){
            if(nextIndex==capacity){
                cout<<"Stack is full"<<endl;
                return;
            }
            data[nextIndex] = element;
            nextIndex++;
        }

        int pop(){
            if(isEmpty()){
                cout<<"The stack is empty"<<endl;
                return 0;
            }
            nextIndex--;
            return data[nextIndex];
        }

        int top(){
            if(isEmpty()){
                cout<<"The stack is empty"<<endl;
                return 0;
            }
            return data[nextIndex-1];
        }
};

int main(){

    Stack s(4);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;

}