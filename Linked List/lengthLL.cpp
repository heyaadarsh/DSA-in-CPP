#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

int lengthLL(){
    int data;
    cin>>data;
    int k = 0;

    Node *head = NULL;
    Node *tail = NULL;

    while(data != -1){
        Node *newNode = new Node(data);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;
        k++;
    }
    return k;
}

int main(){

    int l = lengthLL();
    cout<<"Length of LL is: "<<l<<endl;

}