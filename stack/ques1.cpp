#include <iostream>
using namespace std;

class Queue
{
    int arr[1000];
    int front = 0;
    int rear = -1;

public:
    // enqueue
    void enqueue(int x)
    {
        rear++;
        arr[rear] = x;
    }

    // dequeue
    void dequeue()
    {
        if (front <= rear)
            front++;
    }

    // front
    int aage()
    {
        return arr[front];
    }

    // rear
    int akhri()
    {
        return arr[rear];
    }

    // size
    int sz()
    {
        return rear - front + 1;
    }

    // empty
    bool isEmpty()
    {
        return front > rear;
    }
};

int main()
{
    Queue q;

    q.enqueue(45);
    q.enqueue(23);
    q.enqueue(2);
    q.enqueue(12);

    q.dequeue();

    cout << "Size of queue: " << q.sz() << endl;
    cout << "Front of queue: " << q.aage() << endl;
    cout << "Rear of queue: " << q.akhri() << endl;

    // Print all queue elements
    while (q.sz()>0)
    {
        cout << q.aage() << " ";
        q.dequeue();
    }

    return 0;
}