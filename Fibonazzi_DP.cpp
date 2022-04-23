#include <iostream>

using namespace std;

int fib_array(int n)
{
    int f[n];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 2] + f[i - 1];
    }
    return f[n];
}

int main()
{
    cout << fib_array(15);
    return 0;
}