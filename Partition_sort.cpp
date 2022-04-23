#include <iostream>
using namespace std;

int Exchange(int S[])
{
    int temp;
    int i;
    int pivot = i + 1;
    //s[i]에다가 s[low]넣고 , s[low]에다가 s[i]넣기

    temp = S[i];
    S[i] = S[pivot];
    S[pivot] = temp;

    return 0;
}

int Partition(int low, int high, int pivotpoint)
{
    int S[] = {4, 2, 1, 3, 6, 8, 9, 5, 7, 10};
    int pivotitem = S[low];

    int j = low;

    for (int i = low + 1; i <= high; i++)
    {
        if (S[i] < pivotitem)
        {
            j++;
            Exchange(S[i]);
        }
    }

    return 0;
}

int quicksort(int low, int high)
{
    int pivotpoint;

    if (high > low)
    {
        Partition(low, high, pivotpoint);

        quicksort(low, pivotpoint - 1);
        quicksort(pivotpoint + 1, high);
    }
    return 0;
}

int main()
{
    quicksort(0, 10);

    return 0;
}