// 구조체 템플릿
template <typename T>
struct Point
{
    T x;
    T y;
};

int main()
{
    Point<int> pt;

    pt.x = 1;
    pt.y = 2;

    Point<double> pt2;
}
