#pragma once

bool isSorted(int list[], int n)
{
    for(int i=0; i<n-1; i++)
        if (list[i]>list[i+1])
            return false;
    return true;
}


void Swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
