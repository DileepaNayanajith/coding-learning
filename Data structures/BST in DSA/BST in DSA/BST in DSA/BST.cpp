#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node* parent;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
        parent = nullptr;
    }
};

class BST {
private:
    Node* root;
    int size;

public:
    BST() {
        root = nullptr;
        size = 0;
    }

    void insert(int key) {
        Node* temp = new Node(key);

        if (root == nullptr) {
            root = temp;
            size++;
            return;
        }

        Node* current = root;
        Node* parent = nullptr;

        while (current != nullptr) {// parent follows the current ; current goes to find a null then parent comes to line above to current 
            
            parent = current;

            if (key < current->data)
                current = current->left;
            else
                current = current->right;
        }

        temp->parent = parent;

        if (key < parent->data)
            parent->left = temp;
        else
            parent->right = temp;

        size++;
    }
};