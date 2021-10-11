#include <iostream>

int x = 10;

int f1() {return x;} // x가 가지는 값을 반환함
int& f2() {return x;} // x 변수를 반환함

int& f3()
{
    int n = 10;
    return n;
}
// 절대 지역변수를 참조로 반환하면 안된다


int main()
{
    f1() = 20; // error
    f2() = 20;
}