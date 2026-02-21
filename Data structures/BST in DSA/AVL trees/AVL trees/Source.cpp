#include <iostream>
using namespace std;

#define MAX 100   // Maximum stack size

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;   // Stack is empty initially
    }

    // Push function
    bool push(int value) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow! Cannot push " << value << endl;
            return false;
        }
        arr[++top] = value;
        cout << value << " pushed into stack\n";
        return true;
    }

    // Pop function
    bool pop() {
        if (top < 0) {
            cout << "Stack Underflow! Cannot pop\n";
            return false;
        }
        cout << arr[top--] << " popped from stack\n";
        return true;
    }

    // Peek function
    int peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }

    // Check if empty
    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element is: " << s.peek() << endl;

    s.pop();
    s.pop();

    cout << "Top element after popping: " << s.peek() << endl;

    return 0;
}