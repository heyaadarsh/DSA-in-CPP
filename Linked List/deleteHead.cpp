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

Node* deleteHead(Node *head){
    // Node *temp = head;
    Node *a = head;
    head=head->next;
    delete a;
    // delete a;
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

    print(n1);

    Node *newHead = deleteHead(head);
    cout<<endl;

    print(newHead);

}