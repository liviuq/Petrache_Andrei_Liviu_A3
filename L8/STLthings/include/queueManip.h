#ifndef QUEUEMANIP_H_
#define QUEUEMANIP_H_

template<class T>
class queueManip
{
public:
	static void addToQueue(std::map<std::string, int>& myMap, std::priority_queue< std::pair<std::string, int >, std::vector<std::pair< std::string, int> >, T>& myQueue);
	static void printQueue(std::priority_queue< std::pair<std::string, int >, std::vector<std::pair< std::string, int> >, T>& myQueue);
};

#endif // !QUEUEMANIP_H_

template<class T>
inline void queueManip<T>::addToQueue(std::map<std::string, int>& myMap, std::priority_queue<std::pair<std::string, int>, std::vector<std::pair<std::string, int>>, T>& myQueue)
{
	for (auto& thisPair : myMap)
	{
		myQueue.push(thisPair);
	}
}

template<class T>
inline void queueManip<T>::printQueue(std::priority_queue<std::pair<std::string, int>, std::vector<std::pair<std::string, int>>, T>& myQueue)
{
	while (!myQueue.empty())
	{
		std::cout << myQueue.top().first << " => " << myQueue.top().second << std::endl;
		myQueue.pop();
	}
	std::cout << std::endl;
}
