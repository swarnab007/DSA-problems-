#include<iostream>
// Using this we can include student class which is defined outside of the program
// #include<"student.cpp">
using namespace std;
// Creating a class named student
class student{
	// Properties
	public:							//	We can access this properties from outside the class
	string name;
	int roll;
	//private:						// We can only access those properties from inside the class
	float cgpa;
	// Getters
	// constructor
	/*
	student() {
		cout << "Constructor called " << endl;
	}
	*/
	
	// Parameterised Constructor	
	// this is a keyword which stores the address of object
	// Putting the value of input roll and name to adress of the objects roll and name using this keyword
	student(int roll, string name) {
		this -> roll = roll;
		this -> name = name;
	}
	string getname() {
		return name;
	}
	int getroll() {
		return roll;
	}
	// Setters
	void setname(string ch) {
		name = ch;
	}
	void setroll(int r) {
		roll = r;
	}
	void print() {
		cout << "Roll of Student is " << roll << "\n";
		cout << "Name of Student is " << name << "\n";
	}
};
int main()
{
	// Creating a object of class student
	// Object is an instance of class
	// Object created Statically
	student s1(78, "swarnab");
	s1.print();
	
	// Object created Dynamically
	//student *s = new student;
	
	// Setting values using setters
	/*
	s1.setname("SWARNAB");
	s1.setroll(78);
	
	// Printing the Values using getters
	cout << "Name of Student is " << s1.getname() << endl;
	cout << "Roll of Student is " << s1.getroll() << endl;
	 Setting Values using . operator
	
	s1.name = "SWARNAB";
	s1.roll = 78;
	s1.cgpa = 9.8;
	
	cout << "Name of Student is " << s1.name << endl;
	cout << "Roll of Student is " << s1.roll << endl;
	cout << "CGPA of Student is " << s1.cgpa << endl; 
	cout << "Size Of Class is " << sizeof(s1) << endl;
	*/
	
}
