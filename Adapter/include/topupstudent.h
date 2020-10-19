#pragma once
#include"uogstudent.h"

class TopupStudent : public UoGStudent
{
    private:
        int grade;
    public:
        TopupStudent(const string & name, const int &grade);
        string getGrade() const;
};