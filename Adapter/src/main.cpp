#include <iostream>
#include"../include/uogstudent.h"
#include"../include/aptechstudent.h"
#include"../include/bridgestudent.h"
#include"../include/btechstudent.h"
#include"../include/topupstudent.h"

#include<vector>
using namespace std;
int main(int argc, char *argv[])
{
	vector<UoGStudent*> student;

	UoGStudent *s = new BTECStudent("John", "Merit");
	student.push_back(s);

	s = new TopupStudent("Paul" , 75);
	student.push_back(s);

	s = new BridgeStudent("manhml", 1);
	student.push_back(s);
	for(int i = 0; i < student.size(); i++)
	{
		student[i]->show();
	}
	for(int i = 0; i < student.size(); i++)
	{
		delete student[i];
	}

}