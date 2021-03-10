#include <iostream>
#include <random>
#include <time.h>
#include <stdio.h>
#include <stdarg.h>
#include <initializer_list>
#include "Sort.h"

using namespace std;

Sort::Sort(int count, int minim, int maximum)
{
	this->count = count;
	vector = new int[count];
	srand(time(0));
	for (int i = 0; i < count; i++)
	{
		int temp = rand() % (maximum - minim + 1) + minim;
		vector[i] = temp;
	}
}

Sort::Sort(initializer_list <int> list)
{
	this->count = list.size();
	vector = new int[count];
	int i = 0;
	for (int x : list)
	{
		vector[i] = x;
		i++;
	}
}

Sort::Sort(int *existingVector, int existingCount)
{
	this->count = existingCount;
	vector = new int[existingCount];

	for (int i = 0; i < existingCount; i++)
	{
		vector[i] = existingVector[i];
	}
}

Sort::Sort(int count, ...)
{
	vector = new int[count];
	this->count = 0;
	va_list args;
	va_start(args, count);
	while (count != 0)
	{
		int a = va_arg(args, int);
		vector[this->count] = a;
		this->count++;
		count--;
	}
}

Sort::Sort(const char* string)
{
	int numbers = 1;
	for (int i = 0; string[i] != 0; i++)
		if (string[i] == ',')
			numbers++;

	this->count = numbers;
	this->vector = new int[count] {};

	int positionInVector = 0;
	for (int i = 0; string[i] != NULL; i++)
	{
		if (string[i] == ',')
		{
			positionInVector++;
			continue;
		}	
		else vector[positionInVector] = vector[positionInVector]*10 + (string[i] - '0');
	}
}

void Sort::InsertSort(bool ascendent)
{
	int i, key, j;

	for (i = 1; i < this->count; i++)
	{
		key = vector[i];
		j = i - 1;
		while (j >= 0 && vector[j] < key && !ascendent)
		{
			vector[j + 1] = vector[j];
			j--;
		}
		while (j >= 0 && vector[j] > key && ascendent)
		{
			vector[j + 1] = vector[j];
			j--;
		}
	}
}

void Sort::QuickSort(bool ascendent)
{
	QuickSortNormal(0, count - 1, ascendent);
}

void Sort::QuickSortNormal(int low, int high, bool ascendent)
{
	if (low < high)
	{
		int part = partition(low, high, ascendent);
		QuickSortNormal(low, part - 1, ascendent);
		QuickSortNormal(part + 1, high, ascendent);
	}
}

int Sort::partition(int low, int high, bool ascendent)
{
	int pivot = vector[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		if (vector[j] < pivot && ascendent)
		{
			i++;
			int temp = vector[i];
			vector[i] = vector[j];
			vector[j] = temp;
		}
		else
			if (vector[j] > pivot && !ascendent)
			{
				i++;
				int temp = vector[i];
				vector[i] = vector[j];
				vector[j] = temp;
			}
	}
	int temp = vector[i + 1];
	vector[i + 1] = vector[high];
	vector[high] = temp;
	return (i + 1);
}

void Sort::BubbleSort(bool ascendent)
{
	int i, j;
	for (i = 0; i < count - 1; i++)
		for (j = i + 1; j < count; j++)
		{
			if (ascendent)
			{
				if (vector[i] > vector[j])
				{
					int temp = vector[i];
					vector[i] = vector[j];
					vector[j] = temp;
				}
			}

			else
			{
				if (vector[i] < vector[j])
				{
					int temp = vector[i];
					vector[i] = vector[j];
					vector[j] = temp;
				}
			}
		}
}
//vector = primul vector
void Sort::Merge(Sort& s)
{
	this->QuickSort();
	s.QuickSort();

	int i = 0, j = 0, lg = 0, lgSecond = s.GetElementsCount();
	int* tempo = new int[this->count + lgSecond];
	while (i < this->count && j < lgSecond)
		if (vector[i] < s.GetElementFromIndex(j))
			tempo[lg++] = vector[i++];
		else
			tempo[lg++] = s.GetElementFromIndex(j++);
	while (i < count)
		tempo[lg++] = vector[i++];
	while (j < lgSecond)
		tempo[lg++] = s.GetElementFromIndex(j++);

	this->vector = tempo;
}

void Sort::Print()
{
	for (int i = 0; i < this->count; i++)
		cout << vector[i] << " ";
	cout << endl;
}

int Sort::GetElementsCount()
{
	return this->count;
}

int Sort::GetElementFromIndex(int index)
{
	return vector[index];
}