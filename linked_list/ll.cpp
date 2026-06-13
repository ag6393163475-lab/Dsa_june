#include <iostream>

using namespace std;

// how to create a single node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void Display(Node* head) {
    Node* i = head;
    while (i != NULL) {
        cout << i -> data << " ";
        i = i -> next;
    }
    cout << endl;
}

void insertFront(Node*& head, int x) {
    Node* newNode = new Node(x);
    newNode -> next = head;
    head = newNode;
}

void insertBack(Node*& head, int x) {
    Node* newNode = new Node(x);

    if (head == NULL)head = newNode;
    else {
        Node* temp = head;
        while (temp -> next != NULL)temp = temp -> next;
        temp -> next = newNode;
    }
}

int main() {

    Node* head = NULL;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        //insertFront(head, a);
        insertBack(head, a);
    }
    // display
    Display(head);

    return 0;
}