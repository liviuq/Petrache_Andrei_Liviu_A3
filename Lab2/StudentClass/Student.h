#pragma once
class Student
{
private:
	char name[100];
	float MathGrade;
	float EnglishGrade;
	float HistoryGrade;

public:
	char* GetStudentName() const;
	void SetStudentName(char name[100]);

	int getMathGrade() const;
	void setMathGrade(int grade);

	int getEngGrade() const;
	void setEngGrade(int grade);

	int getHistoryGrade() const;
	void setHistoryGrade(int grade);

	int getAverageGrade();

};

