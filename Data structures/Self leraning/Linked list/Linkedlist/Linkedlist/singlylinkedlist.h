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


		void insertfirst(int element) {
		Node* temp = new Node(element);


		Node* a = 1000;
		Node* b = 2000;
		a = b;
	}
};

