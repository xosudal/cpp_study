int main()
{
    int v1 = 0, v2 = 0;

    v1 = 10; // ok      10 : rvalue (등호의 오른쪽에만 올 수 있음)
    10 = v1; // error   v1 : lvalue (양쪽 모두 가능)
    v2 = v1; // ok

    //lvalue reference
    int& r1 = v1; // ok
    int& r2 = 10; // error

    // const lvalue reference
    const int& r3 = v1; // ok
    const int& r4 = 10; // ok

    // rvalue reference
    int&& r5 = v1; // error
    int&& r6 = 10; // ok
}