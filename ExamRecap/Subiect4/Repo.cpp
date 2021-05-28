
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

#include "Repo.h"

Shape* Repo::GetShape(std::string shapeType, std::string color)
{
	if (shapeType == "Circle")
	{
		Circle* temp = new Circle(color);
		return temp;
	}
	if (shapeType == "Square")
	{
		Square* temp = new Square(color);
		return temp;
	}
	if (shapeType == "Rectangle")
	{
		Rectangle* temp = new Rectangle(color);
		return temp;
	}
}

void Repo::Add(Shape* _shape)
{
	shapes.push_back(_shape);
}

void Repo::Remove(std::string info)
{
	for (int i = 0; i < shapes.size(); i++)
	{
		if (shapes[i]->GetName() == info || shapes[i]->GetColor() == info)
		{
			shapes.erase(shapes.begin() + i);
			i--;
		}
	}
}

void Repo::PrintAll()
{
	for (auto i : shapes)
	{
		std::cout << "Shape: " << i->GetName() << std::endl;
		std::cout << "Color: " << i->GetColor() << std::endl;
	}

	std::cout << "-----" << std::endl;
}
