/*
4m 철근 자르기
p[n] -> 1m,2m,3m,4m... n meter 잘랐을 때 가격 명시한 배열
p[1]=1, p[2]=5, p[3]=8, p[4]=9

r[n] -> n meter의 철근을 어떻게 팔아야 maximum value를 얻을까?
r[1] -> 1m 철근 어떻게 팔아 max?
r[2] -> 2m 철근 max? = max(1m 2개, 2m 1개)
r[i] -> im 철근 max? = max(1m i개, a,b,c... , 4m x개)

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