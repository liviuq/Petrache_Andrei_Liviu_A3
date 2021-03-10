#pragma once
#include <initializer_list>
using namespace std;
class Sort
{
private:
    int* vector;
    int count;
    int partition(int low, int high, bool ascendent = false);
    void QuickSortNormal(int low, int high, bool ascendent = false);
public:
    
    Sort(int count, int minim, int maximum);
    Sort(initializer_list<int> list);
    Sort(int *existingVector, int existingCount);
    Sort(int count, ...);
    Sort(const char* string);
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Merge(Sort& s);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};
