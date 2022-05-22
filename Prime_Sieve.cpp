#include <iostream>
using namespace std;

int Sieve_prime(int n)
{
    bool prime[n];
    int i, j; // i,j를 global로 저장

    for (i = 2; i <= n; i++)
    {
        prime[i] = true; //
    }

    for (i = 2; i * j <= n; i++) // 자연수 i의 배수 < 입력값 n
    {
        if (prime[i] == true)
        {
            for (j = i * i; j <= n; j += i) // i의 배수인 j는 n보다 작아야한다
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
