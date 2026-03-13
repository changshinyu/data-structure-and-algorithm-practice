#include "SortingUtils.h"

void BubbleSort(int list[], int n)
{
    for (int i=n-1 ; i>0 ; i--)
        for (int j=1; j<=i; j++)
            if (list[j-1] > list[j])
                Swap(list[j-1], list[j]);
}
