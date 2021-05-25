#pragma once

#include <string>

class Operation
{
private:

public:
	virtual std::string GetOperation() = 0;
	virtual int result(int x, int y) = 0;
};

