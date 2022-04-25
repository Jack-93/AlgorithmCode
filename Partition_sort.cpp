#include <iostream>
using namespace std;

int Exchange(int s[])
{
    int temp;
    int i;
    int pivot = i + 1;

    temp = s[i];
    s[i] = s[pivot];
    s[pivot] = temp;

    return 0;
}

int Partition(int low, int high, int s[])
{
    int pivot = s[low];

        return 0;
}

int quicksort(int low, int high, int s[])
{
    int pivotpoint;

    if (high > low)
    {
        Partition(low, high, s);

        quicksort(low, pivotpoint - 1, s);
        quicksort(pivotpoint + 1, high, s);
    }
    return 0;
}

int main()
{

    int s[] = {4, 2, 1, 3, 6, 8, 9, 5, 7, 10};

    quicksort(0, 9, s);

    return 0;
}