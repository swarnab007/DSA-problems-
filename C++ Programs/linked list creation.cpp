#include<iostream>
using namespace std;
class Node {
	public :
	int data;
	Node* next;
	Node(int data) {
		this -> data = data;
		this -> next = NULL;
	}
};
int insertionAtFirst(Node* &head, int d) {
	// Creating new node
	Node* temp = new Node(d);
	// Putting Address in new node
	temp -> next = head;
	head = temp;
}
void print(Node* &head) {
	Node* temp = head;
	while(temp != NULL) {
		cout << temp -> data << " ";
		temp = temp -> next;
	}	
}
int main()
{
	// Creating 1st Node dynamically
	Node* node1 = new Node(10);
	// Creating head pointer which is pointing node1
	Node* head = node1;
	print(head);
	cout << endl;
	insertionAtFirst(head,20);
	print(head);
	// Printing the Node
	// cout << node1 -> data << endl;
	// cout << node1 -> next << endl;
}
