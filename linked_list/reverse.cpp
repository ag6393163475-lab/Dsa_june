#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
    void delete_at_beginning(Node*& head){
        head=head->next;
    }
};
int reverse(Node*head){
    Node*prev=NULL;
    Node*curr=head;
    while(curr){
        Node*nextNode
    }
   
}
