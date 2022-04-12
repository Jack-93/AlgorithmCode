#include <iostream>
using namespace std;

/* binomial coefficient -> nCk = n!/(k!*(n-k)!)
ex) 로또 번호 45개중에 6개 고르기 : 45C6 = 45!/(6!*39!)

arr[n]에서 index 0부터 고르는경우 + 안고르는경우 -> n-1Ck-1 + n-1Ck 0<k<n
k=0이거나 k=n -> 전체중에 전체고르기 or 전체중에 1개고르기의 경우는 1회

고르거나 안고르거나 둘 중 하나이기 때문에 O(2^n)
*/

int bio(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    else //(0<k<n)
    {
        return bio(n - 1, k - 1) + bio(n - 1, k); // subproblem
    }
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;

    cout << bio(n, k);
    return 0;
}