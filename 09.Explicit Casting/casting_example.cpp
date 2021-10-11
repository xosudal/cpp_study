//const int형 변수의 주소를 char*에 담기

int main()
{
    const int c = 10;

    char* p = static_cast<char*>(&c); // error

    char* p = const_cast<char*>(&c); // error

    char* p = reinterpret_cast<char*>(&c); // error

    char* p1 = reinterpret_cast<char*>(
        const_cast<int*>(&c));

    char* p2 = const_cast<char*>(
        reinterpret_cast<const char*>(&c));
}