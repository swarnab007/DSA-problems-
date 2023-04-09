#include<iostream>
using namespace std;
class stack {
	public:
	// Data Members
	int top;
	int *arr;
	int size;
	// Initialization using constructor
	stack(int size) {
		this -> size = size;
		arr = new int[size];
		top = -1;
	}
	void push(int data) {
		// checking if there is space
		if(top < size - 1) {
			top++;
			arr[top] = data;
		}
		else {
			cout << "Stack Overflow" << endl;
		}
	}
	void pop() {
		// checking if stack is not empty 
		if(top >= 0) {
			top--;
		}
		else {
			cout << "Stack Underflow" << endl;
		}
	}
	int peek() {
		if(top >= 0) 
			return arr[top];
		else 
			cout << "Stack is empty" << endl;
	}
	bool isEmpty() {
		if(top == -1) 
			return true;
		else
			return false;
	}
//	void printStack() {
//		while(top <= size-1) {
//			cout << arr[top] << " ";
//			top++;
//		}
//		cout << endl;
//	}
};
int main() {
	stack st(5);
	st.push(22);
	st.push(44);
	st.push(66);
	st.push(88);
	cout << st.peek() << endl;
	st.pop();
	cout << st.peek() << endl;
	st.pop();
	st.pop();
	st.pop();
	if(st.isEmpty()) 
		cout << "Stack is Empty bro" << endl;
	else 
		cout << "Stack is not Empty bro" << endl;
}
