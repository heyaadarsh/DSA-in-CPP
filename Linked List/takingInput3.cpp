#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertTail(Node* &head, Node* &tail, int data){
    Node *temp = new Node(data);
    if (head==NULL || tail==NULL){
        head=tail=temp;
    }
    else{
        tail->next = temp;
        tail = tail->next;
    }
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){

    Node *head = NULL;
    Node *tail = head;

    cout<<"Enter the Size of LL: "<<endl;
    int size;
    cin>>size;

    for(int i = 0; i<size; i++){
        int data;
        cin>>data;
        insertTail(head, tail, data);
    }

    print(head);


}