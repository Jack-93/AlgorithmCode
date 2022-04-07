#include <iostream>
using namespace std;

int main()
{
    int number;     // 입력받을 수
    bool check = 0; // bool로 체크

    cin >> number;

    //3부터 입력받은 수까지 늘려가면서 하나씩 다 넣어보고
    //모듈러연산으로 Prime number인지 아닌지 체크
    //2중포문 -> (3~n)*(2~i(=n)) = O(n^2)
    for (int i = 3; i <= number; i++)
    {
        check = true;
        for (int j = 2; j < i; j++) // 2중 for문을 다 돌 때까지 안나눠지면 소수로 판정
        {
            if (i % j == 0) // 딱 나눠지면 소수가 아님
            {
                check = false;
            }
        }
        if (check)
        {
            cout << i << "은(는) 소수에용"
                 << "\n";
        }
    }

    return 0;
}
