#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

static n int x = 0;
void move(char src, char des)
{
    cout << "step" << setw(4) << ++x << ":  " << src << "-->" << des << endl;
}

void hanoi(int n, char src, char med, char des)
{
    if (n == 1)
        move(src, des);
    else
    {
        hanoi(n - 1, src, des, med);
        move(src, des);
        hanoi(n - 1, med, src, des);
    }
}

int main()
{
    int n;
    cout << "Please input the number of plates:" << endl;
    cin >> n;
    string s = n > 1?"s:":":";
    cout << "The stpes of moving " << n << " plate" << s << endl;
    hanoi(n, 'A', 'B', 'C');
    
    return 0;
}
