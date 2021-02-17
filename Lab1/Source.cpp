#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

using namespace std;

int convertToInt(char number[50])
{

    int sum = 0;
    for (int i = 0; number[i] != '\0'; i++)
    {
        sum *= 10;
        sum += number[i] - '0';
    }
    return sum;
}

int main()
{
    int sum = 0;

    FILE* in = fopen("in.txt", "r");


    while (!feof(in))
    {
        char number[50];
        fscanf(in, "%s", number);

        sum += convertToInt(number);
        number[0] = '\0';
    }

    printf("%d", sum);

    return 0;
    //help
}
