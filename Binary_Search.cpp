#include <iostream>

using namespace std;

int Bin(int n, const int s[], int x)
{
    int low = 1;
    int mid;
    int high = n;

    int location = 0;
    while (location == 0 && low <= high)
    {
        mid = (low + high) / 2;
        if (x == s[mid])
            location = mid;
        else if (x < s[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << location;

    return 0;
}

int main()
{
    const int S[] = {1, 2, 4, 8, 16, 32, 64, 128};

    Bin(8, S, 4);

    return 0;
}