#include <iostream>
#include <string>
using namespace std;
int main()
{
    string yourname, myname;
    int length;
    getline(cin, yourname);
    getline(cin, myname);
    cout << "before swap, yourname is: " << yourname << " and myname is: " << myname << endl;
    swap(yourname, myname);
    cout << "after swap, yourname is: " << yourname << " and myname is: " << myname << endl;
    
    return 0;
}