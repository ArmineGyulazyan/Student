#include "Student.h"
#include <iostream>
using namespace std;
Student::Student() {
	cout << "No arg constructor ";
}
Student::Student(int idnum, double g, char* n) {
    id = idnum;
	grade = g;
	n = new char[50];
}
char* Student::getName() const
 {
	 return name;
 }
int Student::getGrade() const
{
	return grade;
}
int Student::getID() const
{
	return id;
}
void Student::setName( char* newName) {
	name = newName;
}
void Student::setGrade(const double newGrade) {
	grade = newGrade;
}
void Student::setID(const int newID) {
	id= newID;
}
void Student::print() {
	cout << "Checking the Student ";
}

