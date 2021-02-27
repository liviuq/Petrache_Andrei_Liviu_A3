#include <iostream>
#include "Student.h"
#include "Functions.h"

int compareNames(Student a, Student b)
{
	int val = strcmp(a.GetStudentName(), b.GetStudentName());
	if (val == 0)
		return 0;
	else
		if (val > 0)
			return 1;
		else return -1;
}

int compareMathGrade(Student a, Student b)
{
	if (a.getMathGrade() > b.getMathGrade())
		return 1;
	else
		if (a.getMathGrade() == b.getMathGrade())
			return 0;
		else return -1;
}

int compareEnglishGrade(Student a, Student b)
{
	if (a.getEngGrade() == b.getEngGrade())
		return 0;
	else
		if (a.getEngGrade() > b.getEngGrade())
			return 1;
		else return -1;
}

int compareHistoryGrade(Student a, Student b)
{
	
	if (a.getHistoryGrade() == b.getHistoryGrade())
		return 0;
	else
		if (a.getHistoryGrade() > b.getHistoryGrade())
			return 1;
		else return -1;
}

int compareAverageGrade(Student a, Student b)
{
	if (a.getAverageGrade() == b.getAverageGrade())
		return 0;
	else
		if (a.getAverageGrade() > b.getAverageGrade())
			return 1;
		else return -1;
}
