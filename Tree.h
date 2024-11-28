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

	public:	
		Tree()		// Constructor
		{ root = NULL; }

	
		~Tree()	// Destructor
		{ destroySubTree(root); }

		void insert(TreeNode *&, TreeNode *&);
		void destroySubTree(TreeNode *);
		void deleteNode(int, TreeNode *&);
		void makeDeletion(TreeNode *&);
		void displayInOrder(TreeNode *) const;
		void displayPreOrder(TreeNode *) const;
		void displayPostOrder(TreeNode *) const;
		void insertNode(Pokemon);
		bool searchNode(Pokemon);
		void remove(int);

		void displayInOrder() const
		{  displayInOrder(root); }

		void displayPreOrder() const
		{  displayPreOrder(root); }

		void displayPostOrder() const
		{  displayPostOrder(root); }
};
#endif