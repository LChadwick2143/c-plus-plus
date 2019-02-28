#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    for (int i = 4; i > 1; i--)
        cout << setfill(' ') << setw(i) << ' ' << setfill('*') << setw(9 - 2 * i) << '*' << endl;
    
    for (int i = 1; i < 5; i++)
        cout << setfill(' ') << setw(i) << ' ' << setfill('*') << setw(9 - 2 * i) << '*' << endl;
    
    return 0;
}