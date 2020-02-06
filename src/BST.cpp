/*
 * BST.cpp
 *
 *  Created on: Oct 29, 2018
 *      Author: aaronjaymacaldo
 */

#include "BST.hpp"

BST::BST() {
	// TODO Auto-generated constructor stub

}

BST::~BST() {
	// TODO Auto-generated destructor stub
}

node* BST::mkLeaf(int data) { //can insert into recurInsertTree
	node* newNode = new node();
	newNode->data = data;
	newNode->left = nullptr;
	newNode->right = nullptr;
	return newNode;
}

void BST::deleteTree(node* root) {
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

void BST::recurInsertTree(int theData) {
	recurInsertTree(root, mkLeaf(theData));
}
void BST::inOrderTraversalFWD(void) {
	inOrderTraversalFWD(root);
}
void BST::inOrderTraversalRVS(void) {
	inOrderTraversalRVS(root);
}
void BST::deleteTree(void) {
	deleteTree(root);
}

void BST::inOrderTraversalFWD(node* root) {
	if(root->left != nullptr) {
		inOrderTraversalFWD(root->left);
	}
	cout << root->data << endl;
	if(root->right != nullptr) {
		inOrderTraversalFWD(root->right);
	}
}

void BST::inOrderTraversalRVS(node* root) {
	if(root->right != nullptr) {
		inOrderTraversalRVS(root->right);
	}
	cout << root->data << endl;
	if(root->left != nullptr) {
		inOrderTraversalRVS(root->left);
	}
}
