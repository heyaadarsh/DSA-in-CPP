#include <iostream>
using namespace std;
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

void print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* deleteCombined(Node *head, int pos){
    Node *temp = head;
    int count = 1;

    if(temp!=NULL && pos==1){
        Node *a = head;
        head = head->next;
        delete a;
        return head;
    }
    else{
        while(temp!=NULL && count<pos-1){
            temp = temp->next;
            count++;
        }
        
        Node *a = temp->next;
        Node *b = a->next;
        temp->next = b;
        delete a;
        return head;
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

    cout<<"Position to delete: ";
    int pos;
    cin>>pos;
    cout<<endl;

    Node *newHead = deleteCombined(head, pos);
    cout<<endl;

    print(newHead);
}