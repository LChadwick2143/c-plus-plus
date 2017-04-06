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
    int GetYear()
    {
        cout << "year " << year << endl;
        return 0;
    }
    int GetMonth()
    {
        cout << "month " << month << endl;
        return 0;
    }
    int GetDay()
    {
        cout << "day " << day << endl;
        return 0;
    }
    void ShowDate()
    {
        cout << year << "/" << month << "/" << day << endl;
    }
};
int main()
{
    int y, m, d;
    cin >> y >> m >> d;
    Date date(y, m, d);
    date.ShowDate();
    date.GetYear();
    date.GetMonth();
    date.GetDay();
    
    return 0;
}