#include <algorithm>
//#include <stdio.h>
#include <cstdio>

/*
 1. cpp 헤더파일은 확장자를 사용하지 않는다
 2. 기존 c 헤더를 대신하는 새로운 파일을 제공함. 맨 끝 .h를 제거하고 앞에 c를 붙여 사용 (기존것을 계속 지원하기는 함)
    -> 차이점 : cstdio 를 사용하면 printf등의 표준함수가 std namespace 안에 있음.
*/

int main()
{
    printf("%d\n", std::max(1,2));
}