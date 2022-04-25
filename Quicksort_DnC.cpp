/*
Quick sort ->   제일 빠름, 불안정 정렬, 비교정렬
                DnC - pivot 설정 - recursive - merge
                순환호출 depth n -> logn, 비교연산 n -> n번 * O(nlogn)


*/
#include <iostream>

using namespace std;

int partition(int low, int high, int pivot)
{
    int pivotmemory = s[low]; // extra memory;
    int left = low;
    int right = high;
    int temp;

    for (int i = low + 1; i <= high; i++)
    {
        if (s[i] < pivotmemory)
        {
            right++;
            temp = s[left];
            s[left] = s[right];
            s[right] = temp;
        }
    }
}
int quick(int low, int high)
{
    int pivot; // extra memory

    if (high > low)
    {
        partition(low, high, pivot);

        quick(low, pivot - 1);
        quick(pivot + 1, high);
    }
}

int main()
{
    int n = 10;
    int list[] = {5, 3, 8, 4, 9, 1, 6, 2, 7};

    quick(0, 9, s);
    for (int i = 0; i < n; i++)
    {
        cout << list[i] << "\\";
    }

    return 0;
}