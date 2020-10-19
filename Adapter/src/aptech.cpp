#include"../include/aptechstudent.h"

int AptechStudent::getScore() const
{
    return score;
}
AptechStudent::AptechStudent(const string &name, const int &score)
{
    this->name = name;
    this->score = score;
}