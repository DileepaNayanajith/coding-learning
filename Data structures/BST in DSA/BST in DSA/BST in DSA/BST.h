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
   

public:
    Node* root;
    int size;
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
    }// TREE TRAVESAL
    void preorder(Node* temp) {
        if (temp == nullptr) {
            return;
        }
        else {
            cout << temp->data << ",";
            preorder(temp->left);
            preorder(temp->right);
        }
    }
    void inorder(Node* temp) {
        if (temp == nullptr) {
            return;
        }
        else {

            inorder(temp->left);
            cout << temp->data << ",";
            inorder(temp->right);
        }
    }
    void postorder(Node* temp) {
        if (temp == nullptr) {
            return;
        }
        else {

            postorder(temp->left);
            postorder(temp->right);
            cout << temp->data << ",";
        }
    }
};

