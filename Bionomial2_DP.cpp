#include <iostream>
using namespace std;

/* 
binomial coefficient -> nCk = n!/(k!*(n-k)!)
ex) 로또 번호 45개중에 6개 고르기 : 45C6 = 45!/(6!*39!)

arr[n]에서 index 0부터 고르는경우 + 안고르는경우 -> n-1Ck-1 + n-1Ck 0<k<n
k=0이거나 k=n -> 전체중에 전체고르기 or 전체중에 1개고르기의 경우는 1회
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ

추가 메모리를 설정함으로써 이 전에 했던 계산들을 저장해놓고 불러올 수 있다 
=> 타임과 스페이스 모두 개선

2차원 matrix에서 
k=n은 모두 1 -> 하나만 고르는경우
k>n인 경우는 없음
=> 0<j<i

bio(n) = bio(n-1,k-1) + bio(n-1,k) if 0<k<n;
1 if k=0 or k=n;

*/

int bio2(int n, int k)
{
    int b[n][k]; // 메모리 설정

    //i=n, j=k;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i && j <= k; j++)
        {
            if (j == 0 || j == i)
            {
                b[i][j] = 1;
            }
            else
            {
                b[i][j] = b[i - 1][j - 1] + b[i - 1][j];
            }
        }
    }

    return b[n][k];
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;

    cout << bio2(n, k);

    return 0;
}