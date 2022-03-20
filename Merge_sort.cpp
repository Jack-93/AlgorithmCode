#include <iostream>
using namespace std;

int Mergesort(int n, int S[])
{

    const int h = n / 2; // h는 n의 절반
    const int m = n - h; // n-h는 사실상 n/2

    int U[h], V[m]; // 추가 메모리 copy

    if (n > 1) // 시행 횟수 , list의 길이가 0,1이면 정리된 것으로 본다;
    {
        Mergesort(h, U); // recursive call;
        Mergesort(m, V);

        merge(h, m, U, V, S);
    }
    return 0;
}

int main()
{
}