#include <cstdlib>

int main()
{
    // c style
    int* p1 = (int*)malloc(sizeof(int)*10);

    free(p1);

    // c++ style
    int* p2 = new int; // int 1개, 4byte

    delete(p2);

    int* p3 = new int[10];

    delete[] p3;
    //delete p3; // 미 정의 동작(undefined)

    int** p4 = new int*[2];
    delete[] p4;

    // malloc은 생성자 호출은 못함. new는 생성자를 호출
}