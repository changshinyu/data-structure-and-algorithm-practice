void InsertionSort(int list[], int n)
{
    for(int i=1; i<n; i++)
    {
        int key=list[i];
        int j=i-1;
        while(j>=0 && list[j]>key)
        {
            list[j+1]=list[j];
            j--;
        }
        list[j+1]=key;
    }
}
