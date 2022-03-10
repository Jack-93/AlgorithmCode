#include <iostream>
using namespace std;
/*
problem : Determine whether x  S
instance : S = [13, 2, 5, 8, 9, 10, 11, 7], x = 7 or 6 answer → yes or no
algorithm for this problem?
*/

// binary search = O(log n);
int binsearch(int n,
              const int S[],
              int x)
{
    int low, high, mid;
    low = 1;
    high = n;
    int location = 0;

    while (low <= high && location == 0)
    {
        mid = (low + high) / 2;
        if (x == S[mid])
        {
            location = mid;
        }
        else if (x < S[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << location + 1;

    return 0;
}

int main()
{
    const int S[] = {13, 2, 5, 8, 9, 10, 11, 7};

    binsearch(8, S, 5);

    return 0;
}