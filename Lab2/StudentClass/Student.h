#pragma once
class Student
{
private:
	mutable char* name;
	float MathGrade;
	float EnglishGrade;
	float HistoryGrade;

public:
	char* const GetStudentName() const;
	void SetStudentName(const char* name);

	float getMathGrade() const;
	void setMathGrade(float grade);

	float getEngGrade() const;
	void setEngGrade(float grade);

	float getHistoryGrade() const;
	void setHistoryGrade(float grade);

	float getAverageGrade() const;
};

