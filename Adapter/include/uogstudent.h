#pragma once
#include<iostream>
#include<string>
using namespace std;
class UoGStudent
{
    protected:
        string name;
    public:
        UoGStudent(const string &name);
        string getName() const;
        virtual string getGrade() const = 0;
        void show() const;
        virtual ~UoGStudent();
};