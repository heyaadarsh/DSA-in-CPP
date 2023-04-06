#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *sortnode(Node *head)
{

    Node *temp = head;

    vector<int> s;
    

    while (temp != NULL)
    {
        s.push_back(temp->data);
        temp = temp->next;
    }
    //cout << "heloo" << endl;
    sort(s.begin(), s.end());

    temp = head;

    for (int i = 0; i < s.size(); i++)
    {
        temp->data = s[i];
        temp = temp->next;
    }

    return head;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}
int main()
{
    // Creating Nodes through default constructor
    Node n1(10);
    Node *head = &n1;
    Node *tail = &n1;
    insertAtTail(tail, 23);
    insertAtTail(tail, 44);
    insertAtTail(tail, 33);
    insertAtTail(tail, 11);
    insertAtTail(tail, 90);

    print(head);
    Node *head1 = sortnode(head);
    print(head1);
}