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

Node* insertHead(Node *head, int data){
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;

    return head;
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
}

int main(){

    Node *n1 = new Node(10);
    Node *head = n1;
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    cout<<"LL Before insertion: "<<endl;
    print(n1);
    cout<<"Enter the number you want to add at head: "<<endl;
    int num;
    cin>>num;

    Node *newHead = insertHead(head, num);
    cout<<"LL After insertion: "<<endl;
    print(newHead);
}