#pragma once
#include <iostream>
#include <vector>
template <class T>
class VectorTemp
{
private:
	int count;
	int size;
	T* array;

public:
	VectorTemp() :
		count(0),
		size(2),
		array(nullptr) {}

	void push(T element);
	T pop();
	void remove(int index); //index from 1 to count
	void insert(const T& element, int index);
	void sort();
	const T& get(int index);
	int getCount();
	void print();

};

template<class T>
inline void VectorTemp<T>::push(T element)
{
	if (array == nullptr)
	{
		array = new T[2];
		array[0] = element;
		count++;
	}
	else
	{
		if (count + 1 <= size)
		{
			array[count] = element;
			count++;
		}
		else
		{
			size = size * 2;
			T* temp = new T[size];
			for (int i = 0; i < count; i++)
				temp[i] = array[i];
			temp[count] = element;
			count++;
			delete[] array;
			array = temp;
		}
	}
}

template <class T>
inline void VectorTemp<T>::print()
{
	std::cout << "#of elements: " << count << ", size = " << size << std::endl;
	for (int i = 0; i < count; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

template<class T>
inline T VectorTemp<T>::pop()
{
	T temp = array[count - 1];
	array[count - 1] = NULL;
	count--;
	return temp;
}

template<class T>
inline void VectorTemp<T>::remove(int index)
{
	for (int i = index - 1; i < count; i++)
		array[i] = array[i + 1];
	array[count - 1] = NULL;
	count--;
}

template<class T>
inline void VectorTemp<T>::insert(const T& element, int index)
{
	if (count + 1 <= size)
	{
		for (int i = count; i >= index; i--)
			array[i] = array[i - 1];
		array[index - 1] = element;
		count++;
	}
	else
	{
		size *= 2;
		T* temp = new T[size];
		for(int i = 0; i < count; i++)
			temp[i] = array[i];
		delete[] array;
		array = temp;
		insert(element, index);
	}
}

template<class T>
inline void VectorTemp<T>::sort()
{
	for(int i = 0; i < count - 1; i++)
		for(int j = i+1; j < count; j++)
			if (array[i] > array[j])
			{
				T temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
}

template<class T>
inline const T& VectorTemp<T>::get(int index)
{
	return array[index];
}

template<class T>
inline int VectorTemp<T>::getCount()
{
	return count;
}