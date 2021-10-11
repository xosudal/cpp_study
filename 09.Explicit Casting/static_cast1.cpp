void foo(int) {}
void foo(double) {}

int main()
{
    const int c = 10;
    double d = 3.4;

    int n = static_cast<int>(d);
    int* p1 = static_cast<int*>(malloc(100));

    auto p2 = static_cast<void(*)(int)>(&foo);

    int* p3 = static_cast<int*>(&d); // error. 다른 type을 가리킴
    int* p4 = static_cast<int*>(&c); // 상수성 제거이므로 error
}