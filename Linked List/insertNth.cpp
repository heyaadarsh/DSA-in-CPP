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

Node* insertNth(Node *head, int pos, int data){
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;

    while(temp != NULL && count<pos-1){
        temp = temp->next;
        count++;
    }

    if(temp != NULL){
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}

void print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    Node *head = NULL;

    Node *n1 = new Node(10);
    head = n1;
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    cout<<"Enter position to insert: ";
    int pos;
    cin>>pos;
    cout<<endl;

    cout<<"Enter num to insert: ";
    int val;
    cin>>val;
    cout<<endl;



    Node *newHead = insertNth(head, pos, val);
    print(newHead);

}