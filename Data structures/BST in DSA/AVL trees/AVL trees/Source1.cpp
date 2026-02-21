#include <iostream>;
using namespace std;
const int Max = 100;

class stack_array {
private:
	int arr[Max];
	int top;

public:
	stack_array() {
		top = -1;
	}
	void push(int x) {
		if (top >= Max - 1) {
			cout << "stack Overflow" << endl; return;
		}
		top++;
		arr[top] = x;

	}
	int pop() {
		if (top < 0) {
			cout << "stack underflow" << endl;
			return;
		}
		int temp = arr[top];
		top--;
		return temp;

	}
	bool isempty() {
		return(top < 0);
	}
	void display() {
		if (isempty) {
			cout << "stack is empty" << < endl; return;
		}
		cout << "stack elements";
		for (int i = 0;i <= top;i++) {
			cout <
		}
		cout <
	}

};