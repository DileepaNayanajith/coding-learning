#include <iostream>
using namespace std;

const int MAX = 100;

class Queue_Array
{
private:
    int arr[MAX];
    int front;
    int rear;
    int size;

public:
    Queue_Array()
    {
        front = 0;
        rear = -1;
        size = 0;
    }

    // ENQUEUE
    void enqueue(int x)
    {
        if (size >= MAX)
        {
            cout << "Queue Overflow" << endl;
            return;
        }

        rear = (rear + 1) % MAX;   // circular queue logic
        arr[rear] = x;
        size++;

        cout << x << " inserted into queue" << endl;
    }

    // DEQUEUE
    void dequeue()
    {
        if (size <= 0)
        {
            cout << "Queue Underflow" << endl;
            return;
        }

        cout << arr[front] << " removed from queue" << endl;

        front = (front + 1) % MAX;  // move front forward
        size--;
    }

    // PEEK (Front element)
    int peek()
    {
        if (size <= 0)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        return arr[front];
    }

    // CHECK EMPTY
    bool isEmpty()
    {
        return (size == 0);
    }
};

int main()
{
    Queue_Array q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    q.dequeue();

    cout << "Front element after dequeue: " << q.peek() << endl;

    return 0;
}