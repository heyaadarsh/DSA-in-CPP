#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;

    Node (int data){
        this -> data = data;
        this -> next = NULL;
    }
};

int main(){

    Node *n1 = new Node(10);
    Node *head = n1;
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(60);

    n1 -> next = n2;
    n2 -> next = n3;
    n3 -> next = n4;
    n4 -> next = n5;
}