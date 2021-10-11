#include <iostream>
using namespace std;
int main()
{
    int n = 10;

    n = 20;

    int& r = n; // reference

    r = 30;

    cout<< n << endl;
    cout << r << endl;

    cout << &n << endl;
    cout << &r << endl;
}

// 변수 : 메모리의 특정 위치를 가리키는 이름
// 래퍼런스 변수 : 기존 변수에 또 다른 이름을 부여
