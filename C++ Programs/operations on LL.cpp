#include<iostream>
using namespace std;
class Node {
	public :
		// defining node
	int value;
	Node* next;
	// Constructor
	Node(int value) {
		this -> value = value;
		this -> next = NULL; 
	}
	// Destructor
	~Node() {
		int data = this -> value;
		// Memory Free
		if(this -> next = NULL) {
			delete next;
			this -> next = NULL;
		}
	}
};
void insertionAttail(Node* &tail, int data) {
	// Creating new node
	Node* temp = new Node(data);
	// Pointing Tail to temp
	tail -> next = temp;
	temp -> next = NULL;
	tail = temp; 
}
void insertionAthead(Node* &head, int data) {
	Node* temp = new Node(data);
	temp -> value = data;
	temp -> next = head;
	head = temp;
}
void insertionatPos(Node* &head, Node* &tail, int pos, int data) {
	// Inserting at Start
	if(pos == 1) {
		insertionAthead(head, data);
		return;
	}
	Node* temp = head;
	int cnt = 1;
	while(cnt < pos - 1) {
		temp = temp -> next;
		cnt++;
	}
	// Inserting at End 
	if(temp -> next = NULL) {
		insertionAttail(tail, data);
		return;
	}
	Node* nodeinsert = new Node(data);
	nodeinsert -> next = temp -> next;
	temp -> next = nodeinsert;
}
void deleteNode(Node* &head, int pos) {
	Node* curr = head;
	Node* prev = NULL;
	// Deleting at start position
	if(pos == 1) {
		curr -> next = NULL;
		// Memory free
		delete curr;
	}
	else {
		int cnt = 1;
		while(cnt < pos) {
		prev = curr;
		curr = curr -> next;
		cnt++;
	}
	prev -> next = curr -> next;
	// Memory Free
	delete curr;
	}
}
// Traverse in Linked List
void print(Node* &head) {
	// Creating temp to traverse
	Node* temp = head;
	while(temp != NULL) {
		cout << temp -> value << " ";
		temp = temp -> next;
	}
}
int main()
{
	// Creating Node
	Node* node1 = new Node(10);
	// Pointing head and tail at first Node
	Node* head = node1;
	Node* tail = node1;
	print(head);
	cout << endl;
	insertionAthead(head, 15);
	insertionAttail(tail, 20);
	print(head);
	insertionatPos(head, tail, 4, 22);
	cout << endl;
	print(head);
	cout << endl;
	deleteNode(head, 3);
	print(head);
}
