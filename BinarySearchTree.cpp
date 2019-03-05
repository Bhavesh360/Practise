// BinarySearchTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <queue>
#include <iostream>
using namespace std;

struct BSTNode{
	BSTNode * left;
	BSTNode * right;
	int data;
};


BSTNode* createNewNode(int data) {
	BSTNode * newNode = new BSTNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

void Insert(BSTNode* &root, int data )     //think about how you could do it with pointer reference like BSTNode* &root
{
	if (root == NULL) {
		root = createNewNode(data);
		//root->data = data;
		return;
	
	}
	else if (data <= root->data) {
		Insert(root->left, data);
	}
	else {
		Insert(root->right, data);
	}
	
}
void BSTInsertwithoutRecursion(BSTNode* &root, int data) {
	if (root == NULL) {
		root = createNewNode(data);
		return;
	}
	BSTNode* curr = root;
	BSTNode* parent = NULL;

	while (curr != NULL) {

		parent = curr;

		if (data <= curr->data) {
			curr = curr->left;
		}
		else {
			curr = curr->right;
		}
	}

	if (data <= parent->data) {
		parent->left = createNewNode(data);
	}
	else {
		parent->right = createNewNode(data);
	}
}

void breadthFirstSearchPrint(BSTNode* &root) {		//also called level Order Traversal
	//cover the corner case first
	
	cout << "breadth first search traversal" << endl;
	if (root == NULL) {
		return;
	}
	//create a q that would holde node bstnode type
	queue<BSTNode*> Q;
	Q.push(root);
	while (!Q.empty()) {
		cout << Q.front()->data<< " " ;
		if (Q.front()->left != NULL) {
			Q.push(Q.front()->left);
		}
		if (Q.front()->right != NULL) {
			Q.push(Q.front()->right);
		}
		
		Q.pop();
	}
	cout << endl;
}
void preorder(BSTNode* &root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}
void inorder(BSTNode* &root)
{
	if (root == NULL) {
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
};

void postorder(BSTNode* &root) 
{
	if (root == NULL) {
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";


};


int DeptofTree(BSTNode* &root) {
	if (root == NULL) {
		return 0;
	}
	int leftdepth = DeptofTree(root->left);
	int rightdepth = DeptofTree(root->right);

	if (leftdepth > rightdepth) {
		return leftdepth + 1;
	}
	else // if rightdepth is greater or if both are equal 
	{
		return rightdepth + 1;
	}
}
int main()
{
	BSTNode* root = NULL;
	Insert(root, 10);
	Insert(root, 11);
	Insert(root, 5);
	Insert(root, 100);
	Insert(root, 20);
	Insert(root, 110);
	Insert(root, 13);
	Insert(root, 2);
	Insert(root, 6);

	breadthFirstSearchPrint(root);
    
	cout << "Preorder" << endl;
	preorder(root);
	cout << endl;

	cout << "inorder" << endl;
	inorder(root);
	cout << endl;

	cout << "postorder" << endl;
	postorder(root);
	cout << endl;

	cout << "Depth of tree" << endl;
	cout << DeptofTree(root) << endl; 

	return 0;
}

