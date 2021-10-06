// c++ 표준의 모든 요소는 std 이름 공간 안에 있음

#include <algorithm>

int main()
{
    int n = std::max(1,2); // 1번

    using std::max; // 2번

    using namespace std; // 3번
}