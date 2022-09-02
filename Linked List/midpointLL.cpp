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

void printNth(Node *head, int pos){
    Node *temp = head;
    int count = 0;
    while(temp!=NULL){
        if(count==pos){
            cout<<temp->data<<endl;
        }
        count++;
        temp=temp->next;
    }
}

Node* midpoint(Node *head){
    Node *temp = head;
    Node *slow = head;
    Node *fast = head;

    while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}


int main(){
    Node *head = NULL;

    Node *n1 = new Node(10);
    head = n1;
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    Node *slowAd = midpoint(head);

    cout<<slowAd->data<<endl;

}