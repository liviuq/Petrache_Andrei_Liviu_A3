#ifndef MAPMANIP_H_
#define MAPMANIP_H_

class mapManip
{
public:
	static void addToMap(std::vector<std::string> words, std::map<std::string, int>& myMap);
	static void printMap(std::map<std::string, int>& myMap);
};

#endif // !MAPMANIP_H_

