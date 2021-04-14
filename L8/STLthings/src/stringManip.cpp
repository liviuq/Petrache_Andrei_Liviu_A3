#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "..\include\stringManip.h"

bool stringManip::bothAreSpaces(const char& lhs, const char& rhs)
{
	return (lhs == rhs) && (lhs == ' ' ||
                            lhs == ',' ||
                            lhs == '.' ||
                            lhs == '?' ||
                            lhs == '!');
}

void stringManip::removeMultipleSpaces(std::string str)
{
    auto new_end = std::unique(str.begin(), str.end(), bothAreSpaces);
    str.erase(new_end, str.end());
}

void stringManip::retrieveWords(std::string str, std::vector<std::string>& words)
{
    std::string word = "";
    for (auto x : str)
    {
        if ((x == ' ') || 
            (x == ',') ||
            (x == '.') || 
            (x == '?') || 
            (x == '!'))
        {
            if (!word.empty())
            {
                words.push_back(word);
                word = "";
            }
        }
        else
        {
            word = word + x;
        }
    }
}

void stringManip::transformLower(std::vector<std::string>& words)
{
    for (auto& i : words)
        std::transform(i.begin(), i.end(), i.begin(),
            [](unsigned char c) { return std::tolower(c); });
}

void stringManip::printVectorOfStrings(std::vector<std::string>& words)
{
    for (auto& i : words)
        std::cout << i << " ";
    std::cout << std::endl << "End of print" << std::endl << std::endl;
}
