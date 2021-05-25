#pragma once


class Author
{
private:
	std::string surname;
	std::string firstname;

public:

	Author() :
		surname("surname"),
		firstname("firstname") {}
	Author(std::string _surname, std::string _firstname) :
		surname(_surname),
		firstname(_firstname) {}

	std::string GetSurname() { return surname; }
	std::string GetFirstname() { return firstname; }
};