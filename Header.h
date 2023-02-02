#include <iostream>
#include <string>
using namespace std;

class Person 
{
protected:
	string name;
	int age;

public:
	void setName(string n); 
	string getName() const;

	void setAge(int a);
	int getAge() const;
};

class Student : virtual public Person {
protected:
	string major;

public:
	void setMajor(string m);
	string getMajor() const;
};

class Employee : virtual public Person {
protected:
	double salary;

public:
	void setSalary(double s);
	double getSalary() const;
};

class TeachingAssistant : public Student, public Employee {
public:
	string subject;
	void displayTeachingAssistantInfo(const  TeachingAssistant &ta);
};


