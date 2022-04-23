#include <iostream>
using namespace std;

// O(n)의 중복연산을 제거한 피보나치 DP
int fibo(int n)
{
    int f[n]; // 메모리 저장공간 설정 -중복연산 제거

    f[0] = 0;
    f[1] = 1; // 초기값 설정 -필수

    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 2] + f[i - 1]; // DP
    }
    return f[n];
}

int main()
{
    int n;
    cin >> n;

    cout << fibo(n);

    return 0;
}