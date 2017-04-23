#include <iostream>
using namespace std;
class Point
{
    float x, y;
    public:
    Point(float i, float j)
    {
        x = i;
        y = j;
    }
    float GetX()
    {
        return x;
    }
    float GetY()
    {
        return y;
    }
};
class Circle: public Point
{
    float r;
    public:
    Circle(float x, float y, float i):Point(x, y)
    {
        r = i;
    }
    float GetR()
    {
        return r;
    }
    float Area()
    {
        return 3.14 * r * r;
    }
};
int main()
{
    float x, y, r;
    cin >> x >> y >> r;
    Circle circle(x, y, r);
    cout << "圆心位于(" << circle.GetX() << "," << circle.GetY() << ")半径为" << circle.GetR() << "的圆形面积是" << circle.Area() << endl;
    
    return 0;
}
