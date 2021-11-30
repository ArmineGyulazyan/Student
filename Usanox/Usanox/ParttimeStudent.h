#pragma once
#include "Student.h"
class ParttimeStudent : public Student
{private:
	double hoursAttended;
	double hourlyTuition;
public:
	ParttimeStudent();
	ParttimeStudent(double hA,double hT);
	double getAttendance() const;
	double getHTuition() const;
	void setAttendance(double newhoursAttended);
	void setHTuition(double newhourlyTuition);
	void print();
};

