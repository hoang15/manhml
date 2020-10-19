#pragma once
#include"uogstudent.h"

class BTECStudent : public UoGStudent
{
    private:
        string grade;
    public:
        BTECStudent(const string &name, const string &grade);
        string getGrade() const;
};