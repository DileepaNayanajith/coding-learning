#include<iostream>
#include "BST.h";
using namespace std;


int main() {
	BST tree; 
	tree.insert(10);
	tree.insert(20);
	tree.insert(8);
	tree.insert(6);
	tree.insert(2);
	tree.insert(30);
	tree.insert(40);
	tree.insert(55);

	cout << "PREORDER:";
    tree.preorder(tree.root);