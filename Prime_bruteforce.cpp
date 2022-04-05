#include <iostream>
using namespace std;

int main()
{
    int number;     // 입력받을 수
    bool check = 0; // bool로 체크

    //3부터 입력받은 수까지 늘려가면서 하나씩 다 넣어보고 모듈러연산으로 Prime number인지 아닌지 체크
    for (int i = 3; i <= number; i++)
    {
        check = true; // 2중for문을 다 돌 때까지 안나눠지면 소수로 판정
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0) // 딱 나눠지면 소수가 아님
            {
                check = false;
            }
        }
        if (check)
        {
            cout << i << "는 소수에용"
                 << "\n";
        }
    }
}
