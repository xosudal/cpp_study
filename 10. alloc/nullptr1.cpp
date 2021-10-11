void foo(int n) {}
void foo(double d) {}
void foo(bool b) {}
void foo(char* s) {}

int main()
{
    int* p1 = 0;
    int* p2 = nullptr;

    // c++ 11부터 등장
    // null포인터. 0을 사용해도 되긴함



    // 0의 특징
    // 0은 int type임. bool double pointer로 암시적 casting 가능

    int n = 0;
    double d = 0;
    bool b = 0;
    char* s = 0;

    // foo(0); // int
    // foo(0.0); // 실수
    // foo(false); // bool
    // foo(?); // char*, 포인터를 보내야함
    // c에서는 (char*)0 을 보냈으나 c++에서는 nullptr을 보낸다
}