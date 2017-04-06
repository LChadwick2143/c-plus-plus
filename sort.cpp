#include <iostream>
using namespace std;
class student
{
    int num, score;
    
    public:
    student()
    {
        num = 0;
        score = 0;
    }
    void setdata(int i, int j)
    {
        num = i;
        score = j;
    }
    void display()
    {
        cout << "学号:" << num << "  "<< "成绩:" << score << endl;
    }
    
    friend void sorted(student a[], int n);
};
void sorted(student a[], int n)
{
    int p;
    student m;
    for(int i = 0; i < n - 1; i++)
    {
        p = i;
        for(int j = i + 1; j < n; j++)
            if(a[p].score < a[j].score)
                p = j;
        if(p != i)
        {
            m = a[p];
            a[p] = a[i];
            a[i] = m;
        }
    }
}
int main()
{
    int n, i, num, score;
    cin >> n;
    student s[n];
    for(i = 0; i < n; i++)
    {
        cin >> num >> score;
        s[i].setdata(num, score);
    }
    sorted(s, n);
    for(i = 0; i < n; i++)
    {
        s[i].display();
    }
    
    return 0;
}