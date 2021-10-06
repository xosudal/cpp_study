//typedef int DWORD;
using DWORD = int;

//typedef void(*F)(int, int);
using F = void(*)(int, int);


// c++11 부터 도입됨
// 타입 뿐만 아니라 템플릿의 별칭도 만들 수 있음(template alias)


int main()
{
    DWORD n; // int n
    F f; // void(*f)(int, int)
}