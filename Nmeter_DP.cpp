/*
4m ö�� �ڸ���
p[n] -> 1m,2m,3m,4m... n meter �߶��� �� ���� ����� �迭
p[1]=1, p[2]=5, p[3]=8, p[4]=9

r[n] -> n meter�� ö���� ��� �Ⱦƾ� maximum value�� ������?
r[1] -> 1m ö�� ��� �Ⱦ� max?
r[2] -> 2m ö�� max? = max(1m 2��, 2m 1��)
r[i] -> im ö�� max? = ax(1m i��, a,b,c... , 4m x��)
m
r[n], DP -> r[0~2/n] + r[(2/n)+1~n]

*/

#include <iostream>

using namespace std;

int Cut(int n, int p[])
{
    // n>=1, p = ö���� ���̿� ���� ����

    int r[n]; // �߰� �޸� �Ҵ�, r = ö������ �� �� �ִ� ���� �ִ밪
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