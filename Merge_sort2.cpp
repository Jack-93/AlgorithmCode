#include <iostream>
using namespace std;

// 분열된 두 리스트 list[left ... mid]와 list[mid+1 ... right]를 합친다.
// merge sort의 시간복잡도는 분열된 횟수 * nlog n이므로 O(nlog n)
// best case, average case, worst case 모두 O(nlog n)
// 실제 시간 T(n) = 비교+복사 = nlog n + 순간 호출 횟수 * nlog n = (1+a)nlog n

int sorted_list[8]; // 새 리스트들은 추가 메모리 공간이 필요 (copy)

void merge(int list[], int left, int mid, int right) // 실제 분열된 리스트들을 합치는 함수
{
    int i = left;    // i는 left의 첫번째 인덱스
    int j = mid + 1; // j는 두번째 리스트의 시작 인덱스
    int k = left;    // k는 임시 리스트의 시작 인덱스

    while (i <= mid && j <= right)
    {
        if (list[i] <= list[j])
        {
            sorted_list[k++] = list[i++]; // 합쳐질 리스트에 list의 모든 인덱스를 copy
        }
        else
        {
            sorted_list[k++] = list[j++];
        }
    }

    if (i > mid) // 두번째 리스트도 붙히기
    {
        for (int l = j; l <= right; l++)
        {
            sorted_list[k++] = list[l]; // l==j
        }
    }
    else
    {
        for (int l = i; l <= mid; l++)
        {
            sorted_list[k++] = list[l]; //l==i
        }
    }

    for (int l = left; l <= right; l++)
    {
        list[l] = sorted_list[l]; // 정보가 복사된 리스트를 다시 원본으로 recopy,
        // 원본으로 recopy를 해야 원하는 정보를 출력 가능
    }
}

void merge_sort(int list[], int left, int right)
{
    int mid;

    if (left < right)
    {
        mid = (left + right) / 2;

        merge_sort(list, left, mid);      // 첫번째 리스트 정렬
        merge_sort(list, mid + 1, right); // 두번째 리스트 정렬

        merge(list, left, mid, right); // 두 리스트 합병
    }
}

int main()
{
    int list[] = {1, 4, 82, 75, 3, 53, 24, 33}; // 실제 데이터 입력

    merge_sort(list, 1, 8); // 리스트를 Mergesort한다

    for (int i = 0; i < 8; i++)
    {
        cout << list[i] << "\n";
    }

    return 0;
}