
#include"../include/btechstudent.h"

BTECStudent::BTECStudent(const string &name, const string &grade) : UoGStudent(name)
{
    this->grade = grade;
}
string BTECStudent::getGrade() const
{
    return grade;
}