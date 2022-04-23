/* n! -> Divide and conquer Ǯ��
idea->  1. low , high ���� + limit low -> 1 , limit high -> n => 1*2*3 ... *n = n!
        2. 1���� �迭 : low������������������high -> low����������������(low+high)/2������������������������high
        mid=(low+high)/2 �̹Ƿ� ������ 1/2�� ������ -> recursive

        T(n) = 2*T((1/2)n) + c (merge�� n�� ���� -> n )
        -> a=2, b=2 -> O(n)
*/

#include <iostream>

using namespace std;

int nfac(int low, int high)
{

        if (low == high)
        {
                return low;
        }
        else if (low < 1)
        {
                return 0;
        }
        else
        {
                return nfac(low, (low + high) / 2) * nfac(((low + high) / 2) + 1, high);
        }
}

int main()
{
        int a, b;

        cout << nfac(1, 6);

        return 0;
}