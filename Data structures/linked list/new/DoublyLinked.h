#pragma once
#include <iostream>
using namespace std;

class Node {
public:
    int elem;
    Node* next;
    Node* previous;

    Node() {
        elem = 0;
        next = NULL;
        previous = NULL;
    }

    Node(int data) {
        elem = data;
        next = NULL;
        previous = NULL;
    }
};

class doublyLinkedList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    doublyLinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void insertFirst(int elem) {
        Node* temp = new Node(elem);

        if (head == NULL) {
            head = temp;
            tail = temp;
        }
        else {
            temp->next = head;
            head->previous = temp;
            head = temp;
        }

        size++;
    }

    void insertLast(int elem) {
        Node* temp = new Node(elem);

        if (head == NULL) {
            head = temp;
            tail = temp;
        }
        else {
            tail->next = temp;
            temp->previous = tail;
            tail = temp;
        }

        size++;
    }

    void insertAt(int pos, int elem) {
        if (pos == 0) {
            insertFirst(elem);
        }
        else if (pos == size) {
            insertLast(elem);
        }
        else if (pos > 0 && pos < size) {
            Node* temp = new Node(elem);
            Node* current = head;

            for (int i = 0; i < pos - 1; i++) {
                current = current->next;
            }

            temp->next = current->next;
            temp->previous = current;
            current->next = temp;
            (temp->next)->previous = temp; 
            size++;
        }
        else {
            cout << "Invalid Index" << endl;
        }
    }
    void deleteFirst() {
        if (head == NULL) {
            cout << "Empty list" << endl;
        }
        else {
            Node* temp = head;
            if (size == 1) {
                delete temp;
                head = NULL;
                tail = NULL;
            }
            else {
                head = head->next;
                head->previous = NULL;
                delete temp;
            }
            size--;
        }
    }


    void deleteLast() {
        if (tail == NULL) {
            cout << "Empty list" << endl;
        }
        else {
            Node* temp = tail;
            if (size == 1) {
                delete temp;
                head = NULL;
                tail = NULL;
            }
            else {
                tail->previous = tail;
                tail->next = NULL;
                delete temp;
            }
            size--;
        }
    }
    void deleteAt(int pos) {
        if (pos == 0) {
            deleteFirst();
        }
        else if (pos == size - 1) {
            deleteLast();
        }
        else if (pos > 0 && pos < size) {

            Node* current = head;

            for (int i = 0; i < pos; i++) {
                current = current->next;
            }

            //Node* temp =current; better to use a temp cuz can get current the postion 
            current->previous->next = current->next;
            current->next->previous = current->previous;
            delete current;
            size--;

        }
        else {
            cout << "Invalid Index" << endl;
        }
    }


    void printList() {
        Node* current = head;

        while (current != NULL) {
            cout << current->elem << " -> ";
            current = current->next;
        }

        cout << "NULL" << endl;
    }

    // check circular linked lists
};
