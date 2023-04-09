#include<iostream>
using namespace std;
class Node {
	public :
		int value;
		Node* next;
		Node* prev;
		Node(int value) {
			this -> value = value;
			this -> next = NULL;
			this -> prev = NULL; 
		}
};
void insertionAthead(Node* &head, int data) {
	Node* temp = new Node(data);
	temp -> prev = NULL;
	temp -> next = head;
	head -> prev = temp;
	head = temp;
}
void insertionAttail(Node* &tail, int data) {
	Node* temp = new Node(data);
	temp -> next = NULL;
	tail -> next = temp;
	temp -> prev = tail;
	tail = temp;
}
void insertionAtpos(Node* &head, Node* &tail, int pos, int data) {
	if(pos == 1) {
		insertionAthead(head, data);
		return;
	}
	else {
		Node* temp = head;
		int cnt = 1;
		while(cnt < pos - 1) {
			temp = temp -> next;
			cnt++;
		}
		if(temp -> next == NULL) {
			insertionAttail(tail , data);
			return;
		}
		Node* insertpos = new Node(data);
		insertpos -> next = temp -> next;
		temp -> next = insertpos;
		insertpos -> prev = temp;
	}
}
void print(Node* &head) {
	// Creating temp to traverse
	Node* temp = head;
	while(temp != NULL) {
		cout << temp -> value << " ";
		temp = temp -> next;
	}
	cout << endl;
}
int main() {
	Node* node1 = new Node(10);
	Node* head = node1;
	Node* tail = node1;
	print(head);
	cout << endl;
	insertionAthead(head, 20);
	print(head);
	cout << endl;
	insertionAttail(tail, 30);
	print(head);
	insertionAtpos(head, tail, 2, 40);
	print(head);
	insertionAtpos(head, tail, 4, 50);
	print(head);
}
