#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
class Stack{
    Node* top;
    public:
    Stack(){
        top=NULL;
    }
    void push(int x){
        Node* temp= new Node(x);
        temp->next=top;
        top=temp;
    }
    void pop(){
        if (top==NULL)
        return;
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    int peek(){
        return top->data;
    }
    bool empty(){
        return top == NULL;
    }
    
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();

    // cout << "Top element after pop: " << s.peek() << endl;

    if(s.empty())
        cout << "Stack is empty";
    else
        cout << "Stack is not empty";

    return 0;


}