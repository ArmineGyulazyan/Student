#include "ParttimeStudent.h"
#include <iostream>
using namespace std;
ParttimeStudent::ParttimeStudent() {
	cout << "No arg constructor ";
}
ParttimeStudent::ParttimeStudent(double hA, double hT) {
	hoursAttended = hA;
	 hourlyTuition= hT;
}
double ParttimeStudent::getAttendance() const
{
	return hoursAttended;
}
double ParttimeStudent::getHTuition() const
{
	return hourlyTuition;
}
void ParttimeStudent::setAttendance(double newhoursAttended) {
	hoursAttended = newhoursAttended;
}
void ParttimeStudent::setHTuition(double newhourlyTuition) {
	hourlyTuition = newhourlyTuition;
}
void ParttimeStudent::print() {
	cout << "Name is "<<getName<<endl;
	cout << "ID is " << getID<< endl;
}