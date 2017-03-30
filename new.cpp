#include <iostream>
using namespace std;
int* sorted(int a[], int n)
{
    int p, m;
    for(int i = 0; i < n - 1; i++)
    {
        p = i;
        for(int j = i + 1; j < n; j++)
            if(a[p] < a[j])
                p = j;
        if(p != i)
        {
            m = a[p];
            a[p] = a[i];
            a[i] = m;
        }
    }
    
    return a;
}
int main()
{
    int n, s[100], *p, i;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> s[i];
    p = sorted(s, n);
    for(i = 0; i < n; i++)
        cout << p[i] << "   ";
    
    return 0;
}