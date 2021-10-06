#include <stdio.h>
#include <algorithm>

using namespace std;

int count = 0;

int main()
{
    printf("%d\n", max(1,2));

    printf("%d\n", count); // std 안에 count 함수가 있음. 이름 충돌 발생 가능. 전역 변수를 사용하려면 ::count로 사용함

    // 전체를 열지말고 std::max와 같이 사용하는 것이 좋음 그래서
}