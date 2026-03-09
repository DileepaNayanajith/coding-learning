#pragma once
#include<iostream>
using namespace std;

class Node
{
public:
	int element;
	Node* Next;


	Node(int data)
	{
		element = data;
		Next = NULL;
	}
};
class singlyLinkedList {
private:
	Node* head;
	Node* tail;
	int size;

public:
	singlyLinkedList(){
		head = NULL;
		tail = NULL;
		size = 0;
		
		}


		void insertFirst(int element) {
		Node* temp = new Node(element);

		if (head == NULL) {
			head = temp;
			tail = temp;
		}
		else {
			temp->Next = head;
			head = temp;
		}

	}

		void insertLast(int element) {
			Node* temp = new Node(element);

			if (head == NULL) {
				head = temp;
				tail = temp;
			}
			else {
				temp->Next = tail;
				tail = temp;
			}

		}
		void insertAt(int element, int position) {
			if (position == 0) {
				insertFirst(element);
			}
			else if (position == size) {
				insertLast(element);
			}
			else if (position > 0 && position << size) {
				Node* temp = new Node(element);
				Node* current = head;
				for (int i = 0; i < position - 1;i++) {
					current = current->Next;
				}
				temp->Next = current->Next;
				current->Next = temp;
			}
			size++;
		}
		void DeleteFirst() {
			if (head == NULL) {
				cout << "EMPTY LIST";

			}
			else {
				Node* temp = head;
				if (size == 1) {
					delete temp;
					head = NULL;
					tail = NULL;
				}
				else {
					head = head->Next;
					delete temp;
				}
				size--;
			}
		}
		void DeleteLast() {
			if (tail == NULL) {
				cout << "EMPTYLIST";

			}
			else {
				Node* temp = tail;
				if (size == 1) {
					delete temp;
					head == NULL;
					tail == NULL;
				}
				else {
					Node* current = head;
					for (int i = 0;i < size - 2; i++) {
						current = current->Next;
					}
					tail = current;
					tail->Next = NULL;
					delete temp;
				}
			}
		}
		void DeleteAt(int pos) {
			if (pos == 0) {
				DeleteFirst();
			}
			else if (pos == size) {
				DeleteLast();
			}
			else if (pos > 0 && pos < size) {
				Node* current = head;
				for (int i = 0; i < pos - 1; i++) {
					current = current->Next;
				}
				Node* temp = current->Next;
				current->Next = temp->Next;
				delete temp;
				size--;
			}
		}
};


		