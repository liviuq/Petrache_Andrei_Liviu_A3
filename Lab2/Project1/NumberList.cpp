#include <iostream>
#include "NumberList.h"

void NumberList::Init()
{
	count = 0;
	for (int i = 0; i < 10; i++)
		numbers[i] = 0;
}

bool NumberList::Add(int x)
{
	if (count >= 10)
	{
		std::cout << "Cannot add another number to the list! Abort." << std::endl;
		return false;
	}
	else
	{
		numbers[count++] = x;
		return true;
	}
}

bool NumberList::Insert(int position, int value)
{
	if (count >= 10)
	{
		std::cout << "Cannot add another number to the list! Abort." << std::endl;
		return false;
	}
	else
	{
		for (int i = count; i >= position; i--)
		{
			numbers[i] = numbers[i - 1];
		}
		numbers[position-1] = value;
		count++;
		return true;
	}
}

void NumberList::Remove(int position)
{
	if (position < 0 || position > 10)
	{
		std::cout << "Cannot remove the number from the list! Abort." << std::endl;
	}
	for (int i = position; i < count; i++)
	{
		numbers[i-1] = numbers[i];
	}
	count--;
}

void NumberList::Sort()
{
	for (int i = 0; i < 9; i++)
		for (int j = 1; j < 10; j++)
			if (numbers[i] < numbers[j])
			{
				int temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
}

void NumberList::Print()
{
	for (int i = 0; i < count; i++)
		std::cout << numbers[i] << " ";
	std::cout << std::endl;
}