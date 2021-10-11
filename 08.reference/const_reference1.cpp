#include <iostream>
using namespace std;
struct Date
{
    int year;
    int month;
    int day;
};

void foo(const Date& d)
{
}

int main()
{
    Date d = {2021, 10, 8};

    foo(d);

    cout << d.year << endl; // 2021
}

// 인자의 값을 변경하지 못하는 함수를 만들기 위해서
// call by value 말고 const reference를 사용

// call by value의 경우 복사본이 생성되므로 오버헤드가 있음
