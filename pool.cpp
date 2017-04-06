#include <iostream>
using namespace std;
class Circle
{
    int radius;
    
    public:
    Circle(int r=3)
    {
        radius = r;
    }
    float perimeter()
    {
        return 2 * 3.14159 * (3 + radius);
    }
    float area()
    {
        return 3.14159 * (6 * radius + 9);
    }
};
int main()
{
    int r;
    float fencingcost, concretecost;
    cout << "Enter the radius of the pool:";
    cin >> r;
    Circle pool(r);
    fencingcost = 35 * pool.perimeter();
    concretecost = 20 * pool.area();
    cout << "Fencing Cost is " << fencingcost << endl;
    cout << "Concrete Cost is " << concretecost << endl;
    
    return 0;
}