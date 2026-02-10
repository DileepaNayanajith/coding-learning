#include <iostream>
using namespace std;

class Node {
public:
    int elem;
    Node* next;

    Node() {
        elem = 0;
        next = NULL;
    }

    Node(int data) {
        elem = data;
        next = NULL;
    }
};

class singleLinkedList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    singleLinkedList() {
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
            current->next = temp;

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
                Node* current = head;
                for (int i = 0; i < size - 2; i++)
                {
                    current = current->next;
                }
                tail = current;
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

            for (int i = 0; i < pos - 1; i++) {
                current = current->next;
            }

            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
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
};
