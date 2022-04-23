#include <iostream>
using namespace std;

int Mergesort(int n, int S[])
{

    const int h = n / 2;
    const int m = n - h;

    int U[h], V[m];

    if (n > 1)
    {
        Mergesort(h, U);
        Mergesort(m, V);

        merge(h, m, U, V, S);
    }
    return 0;
}
int merge(int h, int m, int u[], int v[], int s[])
{

    int i = 1, j = 1, k = 1;

    while (i <= h && j <= m)
    {
        if (u[i] < v[j])
        {
            s[k++] = u[i++];
        }
        else
        {
            s[k++] = v[j++];
        }
    }
}

int main()
{
}