#include <iostream>
using namespace std;

class Queue {
    int front,rear,maxSize;
    int *Q;

public:
    Queue(int size=5) {
        maxSize=size;
        Q=new int[maxSize];
        front=-1;
        rear=-1;
    }

    bool isEmpty(){
        if (front ==-1&&rear==-1) {
            return true;
        }
        else {
            return false;
        }
    }

    bool isFull() {
        if (rear==maxSize-1) {
            return true;
        }
        else {
            return false;
        }
    }

    void enQueue(int element) {
        if (isFull())
            {
            cout << "Queue FULL" << endl;
            return;
        }
        if (isEmpty()) {
            front=rear=0;
        } else {
            rear++;
        }
        Q[rear] =element;
        cout <<element<< "inserted" << endl;
    }

    void deQueue() {
        if (isEmpty()) {
            cout << "Queue EMPTY" << endl;
            return;
        }
        cout << Q[front] << " deleted" << endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    void showQueue() {
        if (isEmpty()) {
            cout << "Queue EMPTY" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i=front;i<=rear;i++) {
            cout << Q[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    if (q.isEmpty())
        cout<<"Queue is EMPTY" << endl;

    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);

    if (q.isFull()) cout << "Queue is FULL" << endl;
    else cout << "Queue is NOT FULL" << endl;

    q.showQueue();

    q.deQueue();
    q.deQueue();
    q.deQueue();

    if (q.isEmpty()) cout << "Queue is EMPTY again" << endl;

    return 0;
}
