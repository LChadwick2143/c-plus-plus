#include <iostream>
using namespace std;
class date
{
    int year, month, day;
    
    public:
    date(int y, int m, int d):year(y), month(m), day(d){}
    friend ostream & operator <<(ostream & output, date & obj)
    {
        cout << obj.year << "-" << obj.month << "-" << obj.day;
        return output;
    }
};
int main()
{
    int y, m, d;
    cin >> y >> m >> d;
    date date(y, m, d);
    cout << date << endl;
    
    return 0;
}