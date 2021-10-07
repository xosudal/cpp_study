#include <iostream>

struct Point
{
    int x{10};
    int y{20};
};

int main()
{
    Point pt;

    auto [x, y] = pt; // c++17부터 도입됨
                      // 구조체 혹은 배열에서 멤버의 값을 꺼낼 때 사용함

    int arr[2] = {1,2};
    auto [x, y] = arr; // int로 표시 안됨. 무조건 auto로 받아야함
                       // const 가능. 참조도 가능
    
}