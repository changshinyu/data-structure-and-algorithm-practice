#include "SortingUtils.h"

void QuickSort(int list[], int left, int right)
{
    if(left<right)
    {
        int pivot=list[right];
        int i=left-1;
        for(int j=left; j<right; j++)
        {
            if(list[j]<pivot)
            {
                i++;
                Swap(list[i], list[j]);
            }
        }
        Swap(list[i+1], list[right]);
        int p=i+1;
        QuickSort(list, left, p-1);
        QuickSort(list, p+1, right);
    }
}
