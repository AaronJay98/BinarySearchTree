/*
 * BST.hpp
 *
 *  Created on: Oct 29, 2018
 *      Author: aaronjaymacaldo
 */

#ifndef BST_HPP_
#define BST_HPP_

#include <iostream>
using namespace std;

struct node {
	int data;
	node* left;
	node* right;
};

class BST {
public:
	BST();
	virtual ~BST();

	void recurInsertTree(int);
	void inOrderTraversalFWD(void);
	void inOrderTraversalRVS(void);
	void deleteTree(void);


private:
	node* root;
	void recurInsertTree(node*&, node*);
	void inOrderTraversalFWD(node*);
	void inOrderTraversalRVS(node*);
	void deleteTree(node*);
	node* mkLeaf(int);
};

#endif /* BST_HPP_ */
