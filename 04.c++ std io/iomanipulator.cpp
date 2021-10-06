#include <iostream>
#include <iomanip>
using namespace std;

// iomanipulator : 입출력의 형태를 지정(hex, dec)

int main()
{
    int n = 10;

    cout << n << endl; // 10진수

    cout << hex << n << endl; // 16진수

    cout << n << endl; // 위에서 hex를 사용해서 전부 16진수로 나옴

    cout << dec; // 10진수로 다시 변경

    cout << setw(3) << "hello" << endl; // 자리수 맞춰 출력

    cout << setfill('#') << endl; // 공백을 다른 문자로 치환하기

    cout << left << endl; // 출력할때 왼쪽에 맞추기
}