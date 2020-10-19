#include"../include/uogstudent.h"
#include"../include/btechstudent.h"

UoGStudent::UoGStudent(const string &name)
{
    this->name = name;
}
string UoGStudent::getName() const
{
    return name;
}
void UoGStudent::show() const
{
    cout << "Student: " << name <<", grade: " << getGrade() << endl;
}
UoGStudent::~UoGStudent()
{
    //nothing to do
}


