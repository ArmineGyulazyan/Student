#pragma once
class Student
{
protected:
	int id;
	double grade;
private:
	char* name;
public:
	Student();
	Student(int id, double g, char* n);
	char* getName() const;
	 int getID() const;
	int getGrade() const;
	void setName(char* newName);
     void setID(const int newID);
    void setGrade(const double newGrade);
	void print();
};

