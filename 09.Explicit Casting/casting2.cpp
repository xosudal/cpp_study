#include <iostream>

int main()
{
    int n = 0;

    double * p1 = (double*)&n; // error
    *p1 = 3.4;
    // 실제 n은 4byte 할당되어있는데 컴파일러는 double로 인식해 8byte로 넣어버림
    // 잘못된 주소 참조 및 있던 데이터 삭제 가능성 있음


    const int c = 10;

    // int* p2 = &c; // error
    int* p2 = (int*)&c;

    *p2 = 20;

    std::cout << c << std::endl; // 10? 20?

    // c++에서의 해결책
    // 용도별로 4개의 캐스팅 연산자가 제공됨
}