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
};
void insertionAthead(Node* &head, int data) {
	Node* temp = new Node(data);
	temp -> value = data;
	temp -> next = head;
	head = temp;
}
int middle(Node* &head) {
	int i = 1, cnt = 1;
	Node* temp = head;
	while(temp != NULL) {
		temp = temp -> next;
		cnt++;
	}
	temp = head;
	int len = cnt;
	if(len % 2 == 0) {
		while(i <= len/2) {
			temp = temp -> next;
			i++;
		}
		cout << temp -> next -> value << endl;
	}
	else {
		while(i <= (len/2)+1) {
			temp = temp -> next;
			i++;
		}
		cout << temp -> value << endl;
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
		Node* node1 = new Node(40);
		Node* head = node1;
		insertionAthead(head, 30);
		insertionAthead(head, 20);
		insertionAthead(head, 10);
		insertionAthead(head, 50);
//		insertionAthead(head, 60);
		print(head);
		middle(head);
	}
