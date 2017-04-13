#include <iostream>
#include <vector>
using namespace std;
int contain(vector<int> b, int a)
{
    for(int i = 0; i < b.size(); i++)
        if(a == b[i])
            return (i + 1);
    return 0;
}
class intSet
{
    vector<int> set;
    public:
    void set_data(int s)
    {
        for(int i = 0; i < s; i++)
        {
            int temp;
            cin >> temp;
            set.push_back(temp);
        }
    }
    intSet operator + (intSet a)
    {
        intSet temp = *this;
        for(int i = 0; i < a.set.size(); i++)
        {
            int b = contain(set, a.set[i]);
            if(b == 0)
                temp.set.push_back(a.set[i]);
        }
        return temp;
    }
    intSet operator - (intSet a)
    {
        intSet temp = *this;
        for(int i = 0; i < a.set.size(); i++)
        {
            int b = contain(temp.set, a.set[i]);
            if(b)
                temp.set.erase(temp.set.begin() + b - 1);
        }
        return temp;
    }
    friend ostream & operator << (ostream & output, intSet & obj)
    {
        for(int i = 0; i < obj.set.size(); i++)
            cout << obj.set[i] << " ";
        return output;
    }
};
int main()
{
    intSet int1, int2, int3;
    int s;
    cin >> s;
    int1.set_data(s);
    cin >> s;
    int2.set_data(s);
    int3 = int1 + int2;
    cout << "int1+int2=" << int3 << endl;
    int3 = int1 - int2;
    cout << "int1-int2=" << int3 << endl;
    
    return 0;
}