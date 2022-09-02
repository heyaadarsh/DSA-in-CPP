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

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}

void insertTail(Node* &head, Node* &tail, int data){
    Node *temp = new Node(data);
    if(head==NULL || tail==NULL){
        head=tail=temp;
    }
    else{
        tail->next = temp;
        tail = tail->next;
    }

}
int main(){
    Node *head = NULL;
    

    Node *n1 = new Node(10);
    head = n1;
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *tail = n4;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    cout<<"LL Before insertion: "<<endl;
    print(n1);
    cout<<"Enter the number you want to add at head: "<<endl;
    int num;
    cin>>num;


    insertTail(head, tail, num);
    cout<<"LL After insertion: "<<endl;
    print(n1);
}