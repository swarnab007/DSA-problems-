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
void getMin(node* root) {
	node* temp = root;
	while(temp -> left != NULL) {
		temp = temp -> left;
	}
	cout << temp -> data << endl;
}
void getMax(node* root) {
	node* temp = root;
	while(temp -> right != NULL) {
		temp = temp -> right;
	}
	cout << temp -> data << endl;
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
node* insertinBST(node* &root, int d) {
	// Base case
	if(root == NULL) {
		root = new node(d);
		return root;
	}
	// if data greater than root
	if(d > root -> data) 
		root -> right = insertinBST(root -> right, d);
	// if data less than root
	else 	
		root -> left = insertinBST(root -> left, d);
	return root;
}
void takeinput(node* &root) {
	int data;
	cin >> data;
	while(data != -1) {
		root = insertinBST(root, data);
		cin >> data;
	}
}
int main() {
	node* root = NULL;
	// 10 12 8 9 14 7 -1
	cout << "Enter Data to create BST" << endl;
	takeinput(root);
	cout << "printing Tree by level order traversal" << endl;
	LevelOrderTraversal(root);
	cout << "Maximum element in the Tree ";
	getMax(root);
	cout << "Minimum element in the Tree ";
	getMin(root); 
}
