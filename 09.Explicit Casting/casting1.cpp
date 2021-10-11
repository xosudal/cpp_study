#include <iostream>
#include <cstdlib>

// c++에서는 void*가 암시적 형변환이 되지 않음
// c++에서는 static_cast를 통해 casting 함

int main()
{
    int* p1 = static_cast<int*>(malloc(sizeof(int)*10));

    free(p1);
}