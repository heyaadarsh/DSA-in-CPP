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

Node* takeinput(){
    int data;
    cin>>data;

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
    }
    return head;
}

void printNth(Node *head, int i){
    int count = 0;
    Node *temp = head;

    while(temp != NULL){
        if(count == i){
            cout<<temp->data;
        }
        count++;
        temp = temp->next;
    }
    
}

int main(){

    cout<<"Enter the Index"<<endl;
    int i;
    cin>>i;
    Node *head = takeinput();
    printNth(head, i);


}