/*
4m ö�� �ڸ���
p[n] -> 1m,2m,3m,4m... n meter �߶��� �� ���� ����� �迭
p[1]=1, p[2]=5, p[3]=8, p[4]=9

r[n] -> n meter�� ö���� ��� �Ⱦƾ� maximum value�� ������?
r[1] -> 1m ö�� ��� �Ⱦ� max?
r[2] -> 2m ö�� max? = max(1m 2��, 2m 1��)
r[i] -> im ö�� max? = max(1m i��, a,b,c... , 4m x��)

Greedy
->  1. selection procedure
    2. feasibility check(optional)
    3. solution check

*/

#include <iostream>

using namespace std;

int Cut(int n, int p[])
{
}