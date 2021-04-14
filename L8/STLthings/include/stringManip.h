#ifndef STRINGMANIP_H_
#define STRINGMANIP_H_

class stringManip
{
public:
	static bool bothAreSpaces(const char& lhs, const char& rhs);
	static void removeMultipleSpaces(std::string str);
	static void retrieveWords(std::string str, std::vector<std::string>& words);
	static void transformLower(std::vector<std::string>& words);
	static void printVectorOfStrings(std::vector<std::string>& words);
};

#endif //STRINGMANIP_H_
