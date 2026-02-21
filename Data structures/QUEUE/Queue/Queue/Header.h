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
    int dequeue()
    {
        if (size <= 0)
        {
            cout << "Queue Underflow" << endl;
            return -1;
        }

        int value = arr[front];
        front = (front + 1) % MAX;
        size--;

        return value;
    }
    void display()
    {
        if (size == 0)
        {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Queue elements: ";

        for (int i = 0; i < size; i++)
        {
            cout << arr[(front + i) % MAX] << " ";
        }

        cout << endl;
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
