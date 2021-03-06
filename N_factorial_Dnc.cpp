/* n! -> Divide and conquer 熱戚
idea->  1. low , high 竺舛 + limit low -> 1 , limit high -> n => 1*2*3 ... *n = n!
        2. 1託据 壕伸 : lowけけけけけけけけけhigh -> lowけけけけけけけけ(low+high)/2けけけけけけけけけけけけhigh
        mid=(low+high)/2 戚糠稽 庚薦研 1/2稽 蟹勧陥 -> recursive

        T(n) = 2*T((1/2)n) + c (merge研 n腰 呪楳 -> n )
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