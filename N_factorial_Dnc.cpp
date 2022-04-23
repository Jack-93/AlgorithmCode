/* n! -> Divide and conquer 풀이
idea->  1. low , high 설정 + limit low -> 1 , limit high -> n => 1*2*3 ... *n = n!
        2. 1차원 배열 : lowㅁㅁㅁㅁㅁㅁㅁㅁㅁhigh -> lowㅁㅁㅁㅁㅁㅁㅁㅁ(low+high)/2ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁhigh
        mid=(low+high)/2 이므로 문제를 1/2로 나눈다 -> recursive

        T(n) = 2*T((1/2)n) + c (merge를 n번 수행 -> n )
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