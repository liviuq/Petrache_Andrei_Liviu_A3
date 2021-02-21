#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

using namespace std;

int convertToInt(char number[50])
{
    bool isNegative = false;

    int sum = 0;

    if (number[0] == '-')
        isNegative = true;
    if (isNegative)
    {
        for (int i = 1; number[i+1] != '\0'; i++)
        {
            sum *= 10;
            sum += number[i] - '0';
        }
        return -sum;
    }
    else
    {
        for (int i = 0; number[i] != '\0'; i++)
        {
            sum *= 10;
            sum += number[i] - '0';
        }
        return sum;
    } 
}

int main()
{
    int sum = 0;

    FILE* in = fopen("ini.txt", "r");


    while (!feof(in))
    {
        char number[50];
        if (fscanf(in, "%s", number) == NULL)
            exit(EXIT_FAILURE);

        sum += convertToInt(number);
        number[0] = '\0';
    }

    printf("%d", sum);

    return 0;
    //help
}
