#include <iostream>

int main()
{
    int x[10] = {1,2,3,4,5,6,7,8,9,10};

    // 배열, STL 가능
    for (auto n : x)
    {
        std::cout << n << std::endl;
    }

    for (int i=0; i<10; i++)
    {
        std::cout << x[i] << std::endl;
    }
}