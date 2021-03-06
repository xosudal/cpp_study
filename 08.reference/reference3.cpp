#include <iostream>

int main()
{
    int n = 10;

    int* p = &n;

    int& r = n;

    int* p2 = 0; // null ptr 가능
    int& r2; //error

    *p = 20;
    r = 20;

    if (p != 0) {}
    if (r != 0) {} // r은 if문으로 조사할 필요 없음

    // 유사한 점
    // 기존 변수를 가리킴

    // 차이점
    // 레퍼런스 : 변수 이름으로 초기화. 무조건 초기 값이 필요함
    // 포인터 : 초기값 생략 가능. 변수 주소로 초기화

    // 레퍼런스는 *가 필요 없음

    // 레퍼런스는 NULL을 가질 수 없다

    // 레퍼런스의 주소는 기존 변수와 동일 주소
    // 포인터의 주소는 포인터 변수의 주소
}