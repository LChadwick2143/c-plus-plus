#include <iostream>
using namespace std;
class Date
{
    int year, month, day;
    
    public:
    Date(int y=2017, int m=1, int d=1)
    {
        year = y;
        month = m;
        day = d;
    }
    void ShowDate()
    {
        cout << year << "/" << month << "/" << day << endl;
    }
    friend int td(Date a, Date b)
    {
        int n;
        n = 365 * (b.year - a.year) + 30 * (b.month - a.month) + (b.day - a.day);
        return n;
    }
};
int main()
{
    int y, m, d, n;
    cin >> y >> m >> d;
    Date a(y, m, d);
    cin >> y >> m >> d;
    Date b(y, m, d);
    n = td(a, b);
    cout << n << endl;
    
    return 0;
}