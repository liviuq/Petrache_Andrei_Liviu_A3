#pragma warning(disable : 4996)
#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
	char sentence[1200];
	char word[60];
	char tableOfWords[20][60];
	int counter = 0;

	scanf("%[^\n]s", sentence);

	char* token = strtok(sentence, " ,.");
	while (token != NULL)
	{
		strcpy(tableOfWords[counter], token);
		counter++;
		token = strtok(NULL, " ,.");
	}
	for (int i = 0; i < counter; i++)
		for(int j = i+1; j <= counter; j++)
			if (strlen(tableOfWords[i]) > strlen(tableOfWords[j]))
			{
				char temp[60];
				strcpy(temp, tableOfWords[i]);
				strcpy(tableOfWords[i], tableOfWords[j]);
				strcpy(tableOfWords[j], temp);
			}
			else
				if (strlen(tableOfWords[i]) == strlen(tableOfWords[j]))
					if (strcmp(tableOfWords[i], tableOfWords[j]) < 0)
					{
						char temp[60];
						strcpy(temp, tableOfWords[i]);
						strcpy(tableOfWords[i], tableOfWords[j]);
						strcpy(tableOfWords[j], temp);
					}
	for (int i = counter-1; i >= 0; i--)
		printf("%s\n", tableOfWords[i]);
	return 0;
}