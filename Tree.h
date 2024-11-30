#ifndef TREE_H
#define TREE_H
#include "Pokemon.h"

class Tree
{
	private:
		struct TreeNode
		{
			Pokemon value;         // The value in the node
			TreeNode *left;    // Pointer to left child node
			TreeNode *right;   // Pointer to right child node
		};

		TreeNode *root;       // Pointer to the root node
		

		void insert(TreeNode *&, TreeNode *&);
		void destroySubTree(TreeNode *);
		void deleteNode(int, TreeNode *&);
		void makeDeletion(TreeNode *&);
		void displayInOrder(TreeNode *) const;

	public:	
		Tree()		// Constructor
		{ root = NULL; }

	
		~Tree()	// Destructor
		{ destroySubTree(root); }

		//Public functions to adjust and print tree
		void insertNode(Pokemon);
		void printNode(int);
		void remove(int);

		void displayInOrder() const
		{  displayInOrder(root); }
};
#endif