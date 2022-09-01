#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;

    //Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

int main(){
    //Creating Nodes through default constructor
    Node n1(10);
    Node *head = &n1;
    
    Node n2(20);
    Node n3(30);

    //Connecting the Nodes
    n1.next = &n2;
    n2.next = &n3;

    //Printing the LL Data
    cout<<n1.data<<" "<<n2.data<<" "<<n3.data<<endl;
    cout<<head -> data<<endl;

}