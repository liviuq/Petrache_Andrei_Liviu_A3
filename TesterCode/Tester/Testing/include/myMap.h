#ifndef MYMAP_H_
#define MYMAP_H_

template<class K, class V>
class Map
{
public:

	struct Pair
	{
		K key;
		V value;
		int index;
	};

	Pair myMap[100];
	int count = 0;

	class Iterator
	{
	public:
		Pair* currentPair;
		Iterator& operator++() 
		{
			currentPair++;
			return *this;
		}
		bool operator!=(Iterator& it)
		{
			return this->currentPair != it.currentPair;
		}
		Pair operator*()
		{
			return *currentPair;
		}
	};

	Iterator begin()
	{
		Iterator temp;
		temp.currentPair = &myMap[0];
		return temp;
	}

	Iterator end()
	{
		Iterator temp;
		temp.currentPair = &myMap[count];
		return temp;
	}


	V& operator[] (K key);
	void Set(K key, V value);
	bool Get(const K& key, V& value);

	int Count();
	void Clear();
	bool Delete(const K key);
	bool Includes(const Map<K, V>& map);

	void print();
};

template<class K, class V>
inline V& Map<K, V>::operator[](K newKey)
{
	for (int i = 0; i < count; i++)
	{
		if (myMap[i].key == newKey)
		{
			//myMap[i].index = i;
			return myMap[i].value;
		}

	}
	myMap[count].key = newKey;
	return myMap[count++].value;
}

template<class K, class V>
inline void Map<K, V>::Set(K newKey, V newValue)
{
	for (int i = 0; i < count; i++)
	{
		if (myMap[i].key == newKey)
		{
			myMap[i].value = newValue;
			break;
		}
	}
}

template<class K, class V>
inline bool Map<K, V>::Get(const K& thisKey, V& thisValue)
{
	for (int i = 0; i < count; i++)
	{
		if (myMap[i].key == thisKey)
		{
			thisValue = myMap[i].value;
			return true;
		}
	}
	return false;
}

template<class K, class V>
inline int Map<K, V>::Count()
{
	return this->count;
}

template<class K, class V>
inline void Map<K, V>::Clear()
{
	for (int i = 0; i < count; i++)
	{
		myMap[i].key = 0;
		myMap[i].value = nullptr;
		myMap[i].index = 0;
	}

	this->count = 0;
}

template<class K, class V>
inline bool Map<K, V>::Delete(const K thisKey)
{
	for (int i = 0; i < count; i++)
	{
		if (myMap[i].key == thisKey)
		{
			for (int j = i; j < count - 1; j++)
			{
				myMap[j] = myMap[j + 1];
			}
			count--;
			return true;
		}
	}
	return false;
}

template<class K, class V>
bool Map<K, V>::Includes( const Map<K, V>& thisMap)
{
	if (this->count < thisMap.count)
		return false;
	for (int i = 0; i < thisMap.count; i++)
	{
		for (int j = 0; j < thisMap.count; j++)
		{
			if (this->myMap[j].key != thisMap[i].key)
				return false;
		}
	}
}

template<class K, class V>
inline void Map<K, V>::print()
{
	for (int i = 0; i < count; i++)
		std::cout << "(" << myMap[i].key << " , " << myMap[i].value << ")" << std::endl;
}

#endif // MYMAP_H_
/*
2 fct begin end
returneaz un tip de date de tip iterator
++, &, !=
*/
