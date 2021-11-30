#pragma once
#include "Student.h"
class FulltimeStudent : public Student
{
private:
	double fullTuition;

public:
	FulltimeStudent();
	FulltimeStudent(double fT);
	double getFTuition() const;
	void setFTuition(double newfullTuition);
};

