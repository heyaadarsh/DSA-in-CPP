#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* right;
    node* left;

    node(int data){
        this->data=data;
        this->next=NULL;
        this->right=NULL;
        this->left=NULL;

    }

};
void insertathead(node* &head,int data){
    if(data==-1){
        return;
    }
    node* newnode=new node(data);
    newnode->next=head;
    head=newnode;


}
void insertdata(node* &head,int data){
    node* temp=head;
    node* newnode=new node(data);
    node* prev=NULL;

    while(temp!=NULL){
        if(temp->data>=data){
            newnode->next=temp;
            prev->next=newnode;
            return;

        }
        prev=temp;
        temp=temp->next;

    }

}
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;

    }
}
int main()
{
    int data;
    node* head=NULL;
    int ch;
    cout<<"1. For inserting data"<<endl;
    cout<<"2. For adding data into Linkedlist"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>ch;
    switch(ch){
        case 1:{
            do{
                cout<<"insert data:";
                cin>>data;
                insertathead(head,data);
            }while(data!=-1);
        }
        case 2:{
            cout<<"insert data to be added:";
            cin>>data;
            insertdata(head,data);
            break;
        }


    }
    display(head);


    return 0;
}