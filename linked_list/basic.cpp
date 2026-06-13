#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void display(Node*head){
    Node*temp=head;
    while(temp!=NULL){ 
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void length(Node*head){
    int count=0;
    Node*temp=head;
    while(temp!=NULL){
        count++;
    }
    cout<<endl;
}
// void insertFront(Node*head,int x){


// }


int main(){
    Node*head;

    Node*first=new Node(10);
    Node*second=new Node(20);
    Node*third=new Node(30);
    Node*fourth=new Node(40);
    Node*fifth=new Node(50);

    head=first;
    head -> next=second;
    head -> next-> next=third;
    head -> next-> next-> next=fourth;
    head -> next-> next -> next-> next=fifth;

    
    display(head);
    //length
    cout<<length(head)<<endl;
    // insertFront(head,5);
    return 0;
}

    