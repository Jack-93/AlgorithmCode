#include <iostream>
using namespace std;

void exchangesort(int S[])
{
    int i, j, n;
    int temp = 0;
    for (i = 1; i <= n - 1; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (S[j] < S[i])
            {
                temp = S[i];
                S[i] = S[j];
                S[j] = temp;
            }
        }
    }
}

int main()
{
    int s[] = {7, 1, 4, 3, 2, 5, 6};
    exchangesort(s);
    for (int i = 0; i < 7; i++)
    {
        cout << s[i] << "\n";
    }
    return 0;
}