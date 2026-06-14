#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }

    void delete_at_x(Node*& head){
        int position;
        cout<<"Enter the position you want to delete ";
        cin>>position;

        int count = 1;
        Node* temp = head;

        while(temp->next != NULL){

            if(count == (position-1)){

                Node* del = temp->next;   // store node

                temp->next = del->next;

                if(temp->next != NULL){
                    temp->next->prev = temp;
                }

                delete del;

                break;
            }

            temp = temp->next;
            count++;
        }
    }
};

int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    Node* head = first;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    fourth->next = fifth;
    fifth->prev = fourth;

    head->delete_at_x(head);

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";

        if(temp->next == NULL)
            break;

        temp = temp->next;
    }

    cout << endl;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->prev;
    }

    return 0;
}