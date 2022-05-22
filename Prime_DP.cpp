#include <iostream>
using namespace std;
/*

DP
수 = 소수+합성수, 합성수 = 소수*소수 -> 소수로만 나누어 횟수 줄이기
계산한 값은 저장하고 메모리 재사용 -> 한 곳에 소수만 저장하기

list prime = { 소수 }



*/

int DP_prime(int n)
{
    int prime[n];
    int nextindex = 0;
    int i; // global variable로 선언해서 값 저장 (cf. local -> volatile)
    prime[0] = 2;
    nextindex++;

    for (i = 3; i <= n; i++) // 3~n 중 소수 판별
    {
        int check = true;                   // 소수판별 update
        for (int j = 0; j < nextindex; j++) // 자연수%소수 = ?
        {
            if (i % prime[j] == 0)
            {
                check = false;
            }
        }
        if (check == true)
        {
            prime[nextindex] = i; // prime[] 다음 인덱스에 소수 i 집어넣기
            cout << i << "\\";    // 소수 출력
            nextindex++;
        }
    }

    return 0;
}

int main()
{
    DP_prime(15);

    return 0;
}
