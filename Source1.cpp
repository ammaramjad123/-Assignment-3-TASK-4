#include "Header.h"
void Person::setName(string n)
{
	name = n; 
}

string Person::getName() const
{
	return name; 
}

void Person::setAge(int a)
{
	age = a; 
}

int Person::getAge() const 
{
	return age;
}

void Student ::setMajor(string m) 
{
	major = m;
}
string Student::getMajor() const 
{
	return major;
}

void Employee::setSalary(double s) 
{
	salary = s;
}
double Employee::getSalary() const 
{ 
	return salary;
}

void displayPersonInfo(const Person &p) {
	cout << "Name: " << p.getName() << endl;
	cout << "Age: " << p.getAge() << endl;
}

void displayStudentInfo(const Student &s) {
	displayPersonInfo(s);
	cout << "Major: " << s.getMajor() << endl;
}

void displayEmployeeInfo(const Employee &e) {
	displayPersonInfo(e);
	cout << "Salary: $" << e.getSalary() << endl;
}

void TeachingAssistant :: displayTeachingAssistantInfo(const TeachingAssistant &ta)
{
	displayEmployeeInfo(ta);
	cout << "Subject: " << ta.subject << endl;
}
