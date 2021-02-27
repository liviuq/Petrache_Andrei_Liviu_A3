#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Student.h"

const char* Student::GetStudentName() const
{
	return name;
}

void Student::SetStudentName(const char* name)
{
	//if (this->name)
	//	delete this->name;

	this->name = new char[strlen(name) - 1];
	strcpy(this->name, name);
}

float Student::getMathGrade() const
{
	return this->MathGrade;
}

void Student::setMathGrade(float grade)
{
	if (grade >= 1 && grade <= 10)
		this->MathGrade = grade;
	else
		std::cout << "\nWrong value";
}

float Student::getEngGrade() const
{
	return this->EnglishGrade;
}

void Student::setEngGrade(float grade)
{
	if (grade >= 1 && grade <= 10)
		this->EnglishGrade = grade;
	else
		std::cout << "\nWrong value";
}

float Student::getHistoryGrade() const
{
	return this->HistoryGrade;
}

void Student::setHistoryGrade(float grade)
{
	if (grade >= 1 && grade <= 10)
		this->HistoryGrade = grade;
	else
		std::cout << "\nWrong value";
}

float Student::getAverageGrade() const
{
	return (MathGrade + EnglishGrade + HistoryGrade) / 3;
}
