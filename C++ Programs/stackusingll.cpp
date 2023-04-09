#include<iostream>
using namespace std;
class Node {
	public:
	int data;
	Node* next;
	Node(int d) {
		this -> data = d;
		this -> next = NULL;
	}
};
class stack {
	public:
	Node* top;
	stack() {
		this -> top = NULL;
	}
	void push(int data) {
		Node* newNode = new Node(data);
		newNode -> next = top;
		top = newNode;
	}
	void pop() {
		top = top -> next;
	}
	int peek() {
		if(top == NULL) 
			cout << "Stack is Empty" << endl;
		else
			return top -> data;
	}
	bool isEmpty() {
		if(top == NULL) 
			return true;
		else 
			return false;
	}
	void display() {
		Node* temp = top;
		while(temp != NULL) {
			cout << temp -> data << " ";
			temp = temp -> next;
		}
		cout << endl;
	}
};
main() {
	stack st;
	st.push(22);
	st.push(44);
	st.push(66);
	st.display();
	cout << "Displaying after popping an element" << endl;
	st.pop();
	st.display();
	cout << "The Top element is " << st.peek() << endl;
}
