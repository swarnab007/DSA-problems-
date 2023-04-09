#include<iostream>
using namespace std;
class stack {
	// Data Members
	public :
	int size;
	int *arr;
	int top;
	// Behaviour
	stack(int size) {
		this -> size = size;
		arr = new int[size];
		top = -1;
	}
	void push(int element) {
		if(top < size - 1) {
			top++;
			arr[top] = element;
		}
		else {
			cout << "Stack Overflow" << endl;
		}
	}
	void pop() {
		if(top > -1) {
			top--;
		}
		else {
			cout << "Stack Underflow" << endl;
		}
	}
	int peek() {
		if(top > -1 && top < size) {
			return arr[top];
		}
		else {
			cout << "Stack is Empty" << endl;
			return -1;			
		}
	}
	bool isEmpty() {
		if(top == -1) 
			return true;
		else
			return false;
	}
};
int main() {
	stack s(5);
	s.push(22);
	s.push(44);
	// cout << s.peek() << endl;
	 s.pop();
	 cout << s.peek() << endl;
	if(s.isEmpty())
		cout << "Stack is Empty" << endl;
	else
		cout << "Stack is not Empty" << endl;
}
