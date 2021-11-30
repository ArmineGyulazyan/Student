#include "FulltimeStudent.h"
#include <iostream>
using namespace std;
FulltimeStudent::FulltimeStudent() {
	cout << "No arg constructor ";
}
FulltimeStudent::FulltimeStudent(double fT) {
	fullTuition = fT;
}
double FulltimeStudent::getFTuition() const
{
	return fullTuition;
}
void FulltimeStudent::setFTuition(double newfullTuition) {
	fullTuition = newfullTuition;
}