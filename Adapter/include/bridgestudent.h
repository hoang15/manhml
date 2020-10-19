#pragma once
#include"uogstudent.h"
#include"aptechstudent.h"

class BridgeStudent : public UoGStudent
{
    private:
        AptechStudent *student;
    public:
        BridgeStudent(const string &name, const int &score);
        string getGrade() const;
        ~BridgeStudent();
};