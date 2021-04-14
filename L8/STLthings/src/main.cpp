#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <queue>

#include "stringManip.h"
#include "mapManip.h"
#include "queueManip.h"
#include "comparator.h"


int main()
{
	//Checking if <sourceText> is present
	//If not, throw an error and exit
	//If it is present, log that you found it
	std::ifstream fileToRead("sourceText.txt");
	if (!fileToRead.good())
	{
		std::cout << "file not found" << std::endl;
		return EXIT_FAILURE;
	}
	else
	{
		std::cout << "File found!" << std::endl;
	}
	//Reads the line from the stream fileToRead into text
	std::string text;
	std::getline(fileToRead, text);

	//Remove duplicate spaces
	stringManip::removeMultipleSpaces(text);

	//Adds each word into a vector
	std::vector<std::string> words;
    stringManip::retrieveWords(text, words);

	//Transform the strings in a vector to their lower-case state
	stringManip::transformLower(words);

	//chekc if thetransform has been successful
	stringManip::printVectorOfStrings(words);

	//Begin work on the myMap
	std::map<std::string, int> myMap;
	mapManip::addToMap(words, myMap);

	//Print the map for testing purposes
	mapManip::printMap(myMap);

	//Begin work on priority_queue
	//auto comp = [&](std::pair<std::string, int> firstPair, std::pair<std::string, int> secondPair) ->bool {return firstPair.second > secondPair.second; };
	std::priority_queue< std::pair<std::string, int > , std::vector<std::pair< std::string, int> >, compAfterFreq> myQueue1;
	std::priority_queue< std::pair<std::string, int >, std::vector<std::pair< std::string, int> >, compAfterLen> myQueue2;

	//Adding to the queue's
	queueManip<compAfterFreq>::addToQueue(myMap, myQueue1);
	queueManip<compAfterLen>::addToQueue(myMap, myQueue2);

	//printing the queue's
	queueManip<compAfterFreq>::printQueue(myQueue1);
	queueManip<compAfterLen>::printQueue(myQueue2);

	//Close the file
    fileToRead.close();
	return EXIT_SUCCESS;
}
