#pragma once

class Visitor;
class Product
{
private:

public:
	virtual void Accept(Visitor* visitor) = 0;
};