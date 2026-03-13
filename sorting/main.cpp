#include <iostream>
#include <ctime>
#include "SortingUtils.h"
#include "SelectionSort.cpp"
#include "BubbleSort.cpp"
#include "QuickSort.cpp"
#include "InsertionSort.cpp"

int main()
{
    const int SIZE=10;
    int list[SIZE];
    srand((unsigned int)time(NULL));

    for(int i=0; i<SIZE; i++)
        list[i] = rand()%100+1;

    int sorted[SIZE];
    for(int i=0; i<SIZE; i++)
        sorted[i]=list[i];

    clock_t start, end;
    double duration;

    // SelectionSort
    start=clock();
    SelectionSort(sorted, SIZE);
    end=clock();
    duration=(double)(end-start)/CLOCKS_PER_SEC;
    std::cout << "SelectionSort duration: " << duration << " sec" << std::endl;
    std::cout << "Sorted? " << (isSorted(sorted, SIZE) ? "Yes" : "No") << std::endl;
}
