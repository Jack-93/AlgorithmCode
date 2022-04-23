#include <iostream>
using namespace std;
/*
problem : Determine whether x ?ƒŽ S
instance : S = [13, 2, 5, 8, 9, 10, 11, 7], x = 7 or 6 answer ?†’ yes or no
algorithm for this problem?
*/

// sequential search -> bruto force = O(n) time

int SeqSearch(int n,
              const int S[],
              int x)
{
    int location; // output;
    location = 1;
    while (location <= n && S[location] != x)
    {
        location++;
    }

    if (location > n)
    {
        location = 0;
    }

    cout << location + 1;

    return 0;
}

int main()
{
    const int S[] = {13, 2, 5, 8, 9, 10, 11, 7};

    SeqSearch(8, S, 13);

    return 0;
}
