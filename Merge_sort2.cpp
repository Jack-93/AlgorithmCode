#include <iostream>

using namespace std;

// list[left ~  mid] + list[mid+1 ~ high]
// O(nlogn) -> BC,AC,WC

void merge2(int list[], int low, int mid, int high)
{
    mid = (low + high) / 2;
    int i = low; // list[]의 인덱스
    int j = mid + 1;
    int k = low; // u[]의 인덱스
    int u[k];    // 추가 메모리 array allocated

    while (i <= mid && j <= high)
    {
        if (list[i] < list[j])
        {
            u[k++] = list[i++];
        }
        else
        {
            u[k++] = list[j++];
        }
    }
}

void merge_sort(int list[], int left, int right)
{
    int mid;
    if (left < right)
    {
        mid = (left + right) / 2;

        merge_sort(list, left, mid);
        merge_sort(list, mid + 1, right);

        merge2(list, left, mid, right);
    }
}

int main()
{
    int list[] = {23, 41, 82, 75, 3, 53, 24, 33};

    merge_sort(list, 1, 8);

    for (int i = 0; i < 8; i++)
    {
        cout << list[i] << "\t";
    }
    return 0;
}