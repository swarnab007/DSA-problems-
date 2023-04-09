#include<iostream>
#include<queue>
using namespace std;
class node {
	public :
		int data;
		node* left;
		node* right;
		node(int d) {
			this -> data = d;
			this -> left = NULL;
			this -> right = NULL;
		}
};
node* buildTree(node* root) {
	cout << "Enter the Data" << endl;
	int data;
	cin >> data;
	root = new node(data);
	// Base Case
	if(data == -1)
		return NULL;
	cout << "Enter the Data of the Left of " << data << endl;
	// Recursive call for the left of the root data
	root -> left = buildTree(root -> left);
	cout << "Enter the Data of the right of " << data << endl;
	// Recursive call for the right part of the root
	root -> right = buildTree(root -> right);
	return root;
}
void LevelOrderTraversal(node* root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()) {
		node* temp = q.front();
		q.pop();
		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) 
				q.push(NULL);
		}
		else {
			cout << temp -> data << " ";
			if(temp -> left) 
				q.push(temp -> left);
			if(temp -> right) 
				q.push(temp -> right);
		}
	}	
}
void inorder(node* root) {
	// Base case
	if(root == NULL) 
		return;
	inorder(root -> left);
	cout << root -> data << " ";
	inorder(root -> right);
}
void preorder(node* root) {
	// base case
	if(root == NULL) 
		return;
	cout << root -> data << " ";
	preorder(root -> left);
	preorder(root -> right);
}
void postorder(node* root) {
	// base case
	if(root == NULL) 
		return;
	postorder(root -> left);
	postorder(root -> right);
	cout << root -> data << " ";
}
int main() {
	node* root = NULL;
	// Creation of tree
	root = buildTree(root);
	// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
	cout << "Level Order Travesal Output" << endl;
	LevelOrderTraversal(root);	
	cout << "Inorder Traversal " << endl;
	inorder(root);
	cout << endl;
	cout << "Preorder Traversal " << endl;
	preorder(root);
	cout << endl;
	cout << "Postorder Traversal " << endl;
	postorder(root);
	cout << endl;
}
