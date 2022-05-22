#include <iostream>
using namespace std;
/*

DP
�� = �Ҽ�+�ռ���, �ռ��� = �Ҽ�*�Ҽ� -> �Ҽ��θ� ������ Ƚ�� ���̱�
����� ���� �����ϰ� �޸� ���� -> �� ���� �Ҽ��� �����ϱ�

list prime = { �Ҽ� }



*/

int DP_prime(int n)
{
    int prime[n];
    int nextindex = 0;
    int i; // global variable�� �����ؼ� �� ���� (cf. local -> volatile)
    prime[0] = 2;
    nextindex++;

    for (i = 3; i <= n; i++) // 3~n �� �Ҽ� �Ǻ�
    {
        int check = true;                   // �Ҽ��Ǻ� update
        for (int j = 0; j < nextindex; j++) // �ڿ���%�Ҽ� = ?
        {
            if (i % prime[j] == 0)
            {
                check = false;
            }
        }
        if (check == true)
        {
            prime[nextindex] = i; // prime[] ���� �ε����� �Ҽ� i ����ֱ�
            cout << i << "\\";    // �Ҽ� ���
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
