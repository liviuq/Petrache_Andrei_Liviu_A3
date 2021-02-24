#include <iostream>
#include <fstream>
#include "NumberList.h"

int main(int argc, char** argv)
{
	NumberList l;

	l.Init();
	l.Add(5);
	l.Print();
	l.Insert(5, 44);
	l.Print();
	l.Add(6);
	l.Insert(9, 100);
	l.Print();
	return 0;
}