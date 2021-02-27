#include <iostream>
#include <fstream>
#include "NumberList.h"

int main(int argc, char** argv)
{
	NumberList l;

	l.Init();
	l.Add(11);
	l.Add(14);
	l.Insert(3, 15);
	l.Print();
	l.Remove(3);
	l.Print();
	l.Insert(1, 99);
	l.Insert(1, 88);
	l.Print();
	return 0;
}