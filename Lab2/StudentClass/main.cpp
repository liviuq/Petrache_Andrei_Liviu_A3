#include <iostream>
#include <fstream>
#include "Student.h"
#include "Functions.h"

int main(int argc, char** argv)
{
	Student s1, s2;
	s1.SetStudentName("Andrew");
	std::cout << s1.GetStudentName();
	s1.setEngGrade(1);
	s2.SetStudentName("Andrew");
	std::cout << compareNames(s1, s2) << std::endl;;
	s2.setEngGrade(5);
	std::cout << compareEnglishGrade(s1, s2);
	return 0;
}