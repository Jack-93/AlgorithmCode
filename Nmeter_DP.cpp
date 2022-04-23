/*
4m 철근 자르기
p[n] -> 1m,2m,3m,4m... n meter 잘랐을 때 가격 명시한 배열
p[1]=1, p[2]=5, p[3]=8, p[4]=9

r[n] -> n meter의 철근을 어떻게 팔아야 maximum value를 얻을까?
r[1] -> 1m 철근 어떻게 팔아 max?
r[2] -> 2m 철근 max? = max(1m 2개, 2m 1개)
r[i] -> im 철근 max? = ax(1m i개, a,b,c... , 4m x개)
m
r[n], DP -> r[0~2/n] + r[(2/n)+1~n]

*/

#include <iostream>

using namespace std;

int Cut(int n, int p[])
{
    // n>=1, p = 철근의 길이에 따른 가격

    int r[n]; // 추가 메모리 할당, r = 철근으로 낼 수 있는 이익 최대값
    r[0] = 0;
    r[1] = 1;

    if (n == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                r[i] = max(r[i], r[i - j] + p[j]);
            }
        }
    }

    return r[n];
}

int main()
{
    int n;
    int p[] = {0, 1, 5, 8, 9, 11, 18, 21};

    cout << Cut(6, p);
}