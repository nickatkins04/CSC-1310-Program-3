#include <iostream>
#include "Tree.h"
using namespace std;

// Function that adds a new pokemon entry into the pokedex
void Tree::insertNode(Pokemon entry)
{
	TreeNode *newNode = NULL; // Pointer to a new node

	// Create a new node and store entry in it
	newNode = new TreeNode;
	newNode->value = entry;
	newNode->left = newNode->right = NULL;

	// Insert new node
	insert(root, newNode);
}

// Recursive function for traversing and inserting new node
void Tree::insert(TreeNode *&nodePtr, TreeNode *&newNode)
{
	if (nodePtr == NULL)
		nodePtr = newNode; // Inserts the node
	else if (newNode->value < nodePtr->value)
		insert(nodePtr->left, newNode); // Search left branch
	else
		insert(nodePtr->right, newNode); // Search right branch
}

// Recursive function for removing subtree
void Tree::destroySubTree(TreeNode *nodePtr)
{
	if (nodePtr)
	{
		if (nodePtr->left)
			destroySubTree(nodePtr->left);
		if (nodePtr->right)
			destroySubTree(nodePtr->right);
		delete nodePtr;
	}
}

// Function for printing node given index number
void Tree::printNode(int num)
{
	TreeNode *nodePtr = root;

	while (nodePtr)
	{
		if (nodePtr->value == num)
		{
			cout << nodePtr->value;
			return;
		}
		else if (nodePtr->value > num)
			nodePtr = nodePtr->left;
		else
			nodePtr = nodePtr->right;
	}
	cout << "This Pokemon is not in the Pokedex.\n";
	return;
}

// Function that removes entry specified by user by calling delete node
void Tree::remove(int num)
{
	deleteNode(num, root);
}

// Recursive function that deletes node
void Tree::deleteNode(int num, TreeNode *&nodePtr)
{
	if (nodePtr == NULL)
      	cout << "Cannot delete empty node.\n";
	else if (nodePtr->value > num)
		deleteNode(num, nodePtr->left);
	else if (nodePtr->value < num)
		deleteNode(num, nodePtr->right);
	else
		makeDeletion(nodePtr);
}

// Function that deletes node and rebuilds tree
void Tree::makeDeletion(TreeNode *&nodePtr)
{
	// Temp pointer
	// the left subtree.
	TreeNode *tempNodePtr = NULL;

	if (nodePtr == NULL)
		cout << "Cannot delete empty node.\n";
	else if (nodePtr->right == NULL)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->left; // Reattach left child
		delete tempNodePtr;
	}
	else if (nodePtr->left == NULL)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->right; // Reattach right child
		delete tempNodePtr;
	}
	// If node has two children
	else
	{
		// Move one node right
		tempNodePtr = nodePtr->right;
		// Go to end left node
		while (tempNodePtr->left)
			tempNodePtr = tempNodePtr->left;
		// Reattach left subtree
		tempNodePtr->left = nodePtr->left;
		tempNodePtr = nodePtr;
		// Reattach right subtree
		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}
}

// Recursive function that displays tree in order of index numbers
void Tree::displayInOrder(TreeNode *nodePtr) const
{
	if (nodePtr)
	{
		displayInOrder(nodePtr->left);
		cout << nodePtr->value << endl;
		displayInOrder(nodePtr->right);
	}
}