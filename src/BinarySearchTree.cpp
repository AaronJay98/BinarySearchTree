//============================================================================
// Name        : BinarySearchTree.cpp
// Author      : Aaron Jay Macaldo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct node {
	int data;
	node* left;
	node* right;
}; //node

void recurInsertTree(node*&, node*);
void inOrderTraversalFWD(node*);
void inOrderTraversalRVS(node*);
void deleteTree(node*);
node* mkLeaf(int);

int main() {
	node* root;
	recurInsertTree(root, mkLeaf(45));
	recurInsertTree(root, mkLeaf(40));
	recurInsertTree(root, mkLeaf(35));
	recurInsertTree(root, mkLeaf(55));
	recurInsertTree(root, mkLeaf(65));
	recurInsertTree(root, mkLeaf(75));
	try {
		recurInsertTree(root, mkLeaf(65));
	}
	catch(const char* theString) {
		cout << theString << endl;
	}

	inOrderTraversalRVS(root);
	inOrderTraversalFWD(root);

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}

void recurInsertTree(node* &root, node* newNode) {
	if(root == nullptr) {
		root = newNode;
	}
	else if(root->data == newNode->data) {
		throw "Error: Duplicate Key";
	}

	else if(newNode->data < root->data) {
		if(root->left == nullptr) {
			root->left = newNode;
		}
		else
			recurInsertTree(root->left, newNode);
	}
	else {
		if(root->right == nullptr) {
			root->right = newNode;
		}
		else
			recurInsertTree(root->right, newNode);
	}
}

node* mkLeaf(int data) { //can insert into recurInsertTree
	node* newNode = new node();
	newNode->data = data;
	newNode->left = nullptr;
	newNode->right = nullptr;
	return newNode;
}

void deleteTree(node* root) {
	if(root == nullptr) {

	}
	if(root->left != nullptr) {
		deleteTree(root->left);
	}
	if(root->right != nullptr) {
		deleteTree(root->right);
	}
	cout << "Deleting: " << root->data << endl;
	delete root;
}

void inOrderTraversalFWD(node* root) {
	if(root->left != nullptr) {
		inOrderTraversalFWD(root->left);
	}
	cout << root->data << endl;
	if(root->right != nullptr) {
		inOrderTraversalFWD(root->right);
	}
}

void inOrderTraversalRVS(node* root) {
	if(root->right != nullptr) {
		inOrderTraversalRVS(root->right);
	}
	cout << root->data << endl;
	if(root->left != nullptr) {
		inOrderTraversalRVS(root->left);
	}
}
