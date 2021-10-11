#include <iostream>

void f1(int n) {++n;}
void f2(int* p) {++(*p);}
void f3(int& r) {++r;}
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0;

    f1(a);
    f2(&b); // b가 변경될 수 있다고 예측 가능
    f3(c);

    cout << a << endl; // 0, call by value
    cout << b << endl; // 1, call by pointer
    cout << c << endl; // 1, call by reference

}