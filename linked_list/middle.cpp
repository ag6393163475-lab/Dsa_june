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
    Node* middleNode(Node* head)
    {
        Node* slow = head;
        Node* fast = head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

        }
        return slow;
    }
    
    void display(Node* head){

        while(head != NULL){
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
};
int main(){
    // create linked list manually
    Node* head;
    Node* first=    new Node(10);
    Node* second=   new Node(20);
    Node* third=    new Node(30);
    Node* fourth=   new Node(40);
    Node* fifth=    new Node(50);
    head=first;
    head -> next= second;
    head -> next ->next =third;
    head -> next ->next -> next =fourth;
    head -> next ->next -> next-> next=fifth;
    Node* middle=head->middleNode(head);
    cout<<"Middle node: "<<middle->data;
    return 0;
}
