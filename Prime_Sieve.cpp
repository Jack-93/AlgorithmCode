#include <iostream>
using namespace std;

int Sieve_prime(int n)
{
    bool prime[n];
    int i, j; // i,j�� global�� ����

    for (i = 2; i <= n; i++)
    {
        prime[i] = true; //
    }

    for (i = 2; i * j <= n; i++) // �ڿ��� i�� ��� < �Է°� n
    {
        if (prime[i] == true)
        {
            for (j = i * i; j <= n; j += i) // i�� ����� j�� n���� �۾ƾ��Ѵ�
            {
                prime[j] = false;
            }
        }
    }

    for (i = 2; i <= n; i++)
    {
        if (prime[i] == true)
        {
            cout << i << "\\";
        }
    }

    return 0;
}

int main()
{
    Sieve_prime(15);

    return 0;
}
