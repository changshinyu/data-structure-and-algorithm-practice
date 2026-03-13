#include "SortingUtils.h"

void SelectionSort(int data[], int n)
{
    for(int i=0; i<n; i++)
    {
        int min=i;
        for(int j=i+1; j<n; j++)
            if(data[j] < data[min])
                min=j;
        Swap(data[i], data[min]);
    }
}
