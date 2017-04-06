#include <iostream>
#include <math.h>
using namespace std;
class point
{
    float x, y;
    
    public:
    point(float i, float j):x(i), y(j) {}
    friend float distan(point a, point b)
    {
        float d;
        d = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
        return d;
    }
};
int main()
{
    float x, y, d;
    cin >> x >> y;
    point a(x, y);
    cin >> x >> y;
    point b(x, y);
    d = distan(a, b);
    cout << "Distance=" << d << endl;
    
    return 0;
}