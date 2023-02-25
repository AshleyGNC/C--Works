/*
 * TreeNode.h
 *
 *  Created on: Apr 27, 2022
 *      Author: Ashley
 */

#ifndef TREENODE_H_
#define TREENODE_H_

// TreeNode in the binary tree
// every node at most has two children

struct TreeNode{
	int data;
	// some pointers that point to children
	TreeNode *left;
	TreeNode *right;

	TreeNode(int d, TreeNode* l, TreeNode* r){
		data = d;
		left = l;
		right = r;
	}

	TreeNode(int d){
		data = d;
		left = nullptr;
		right = nullptr;
	}

	TreeNode(){
		data = 0;
		left = nullptr;
		right = nullptr;
	}

	bool isLeaf(){
		return left == nullptr && right == nullptr;
	}
};



#endif /* TREENODE_H_ */




