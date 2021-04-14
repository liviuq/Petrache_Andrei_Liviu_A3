#ifndef COMPARATOR_H_
#define COMPARATOR_H_

class compAfterFreq
{
public:
	bool operator()(std::pair<std::string, int> firstPair, std::pair<std::string, int> secondPair)
	{
		return firstPair.second < secondPair.second;
	}
};

class compAfterLen
{
public:
	bool operator()(std::pair<std::string, int> firstPair, std::pair<std::string, int> secondPair)
	{
		return firstPair.first.length() < secondPair.first.length();
	}
};

#endif // !COMPARATOR_H_
