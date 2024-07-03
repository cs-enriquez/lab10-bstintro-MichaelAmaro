#include <iostream>

using namespace std;

// Implement the node class we will need for our Binary Search Tree
class Node {
	public:
		// the Node should contain
		// 	- an integer "key" that holds the value of the Node
		// 	- a pointer to each child possible child node ("right" and "left")
		int key;
		Node * right, * left;
		//No up and down?


		// Write a constructor for the Node
		// input: only an integer value for "key", no pointer arguments
		// 		right and left pointers should be null
		Node(int val){
			key = val;
			right = nullptr;
			left = nullptr;
		}

};


// Use this function to create a Binary Search Tree (BST) tree with the following values
// {13, 0, 7, 6, 21, 15, -2, 12, 99, 18, 19, -1}
Node* createTree() {
	// root
	Node *root = nullptr;

	// level 1 (children of root)
	//left less right greater
	root -> key = 13;
	// level 2 (children of 0)
	root -> left = 0;
	// level 2 (children of 21)
	root -> right -> key = 21;
	// level 3 (children of -2)
	root -> left -> left -> key = -2;
	root -> left -> right -> left -> key = -1;
	// level 3 (children of 7)
	root -> left -> right -> key = 7;
	root -> left -> right -> left -> key = 6;
	root -> left -> right -> right -> key = 12;
	// level 3 (children of 15)
	root -> right -> left -> key = 15;
	root -> right -> left -> right -> right -> key = 19;
	// level 3 (children of 99)
	root -> right -> right -> key = 99;
	// level 4 (children of 18)
	root -> right -> left -> right -> key = 18;
	return root;
}

// Write a function that will search the BST for a target value
//	input: integer target to search for,
			// pointer to root Node
// 	returns: true or false depending on if the value is found
// You should write this function recursively! What is the base case? What is the general case?
bool searchTree(int target, Node* root) {
	// Base cases
	if(root == nullptr){
		return false;
	}
	//Base case 2
	else if (root -> key == target){
		return true;
	}
	else {
		if(root -> key > target){
			return searchTree(target, root -> left);
		}

		else {
			return searchTree(target, root -> right);
		}
	return false;
	
}

}

// Write a function that will return the total number of Nodes in the tree
// 	input: pointer to the root Node
// 	returns: number of nodes currently in the tree
// You should write this function recursively!
int treeSize(Node* root) {
	// base case
	if(root == nullptr){ return 0; }
	// General case
	else {return 1 + treeSize(root -> right) + treeSize(root -> left) ;}
	


}

// BONUS! Write a function that will determine the height of the tree
int treeHeight(Node* root) {
	// base case


	// General case
	
}
