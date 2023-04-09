#include<iostream>
using namespace std;
class Node {
	public :
	int value;
	Node* next;
	Node(int value) {
		this -> value = value;
		this -> next = NULL; 
	}
};
void insertionAttail(Node* &tail, int data) {
	Node* temp = new Node(data);
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
	if(temp -> next = NULL) {
		insertionAttail(tail, data);
		return;
	}
	Node* nodeinsert = new Node(data);
	nodeinsert -> next = temp -> next;
	temp -> next = nodeinsert;
}
void print(Node* &head) {
	Node* temp = head;
	
	while(temp != NULL) {
		cout << temp -> value << " ";
		temp = temp -> next;
	}
}
int main()
{
	Node* node1 = new Node(10);
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
}
