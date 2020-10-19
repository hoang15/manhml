
#include"../include/topupstudent.h"

TopupStudent::TopupStudent(const string & name, const int &grade) :UoGStudent(name)
{
    this->grade = grade;
}
string TopupStudent::getGrade() const
{
    if (grade < 40) return "Failed";
    if (grade < 60) return "Pass";
    if (grade < 80) return "Merit";
    return "Distintion";
}