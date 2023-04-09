#include<iostream>
using namespace std;
class student {
	public :
		string name;
		int roll;
		float cgpa;
		student() {
			cout << "Constructor called" << endl;
		}
		void display() {
			cout << "Hello World" << endl;
		}
		// Destructor is called when scope of an object is finished
		~student() {
			cout << "Destructor called" << endl;
		}
};
int main()
{
	student s1;
	s1.display();
}
