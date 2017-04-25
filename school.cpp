#include <iostream>
#include <string>
using namespace std;
class person
{
    protected:
    string name;
    int number;
    public:
    person(string nam, int num)
    {
        name = nam;
        number = num;
    }
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Number:" << number << endl;
    }
};
class student: public person
{
    string course;
    float grade;
    public:
    student(string name, int num, string cou, float gra): person(name, num)
    {
        course = cou;
        grade = gra;
    }
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Number:" << number << endl;
        cout << "Course:" << course << endl;
        cout << "Grade:" << grade << endl;
    }
};
class teacher: public person
{
    string pro;
    int paper;
    public:
    teacher(string name, int num, string pr, int pa): person(name, num)
    {
        pro = pr;
        paper = pa;
    }
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Number:" << number << endl;
        cout << "pro:" << pro << endl;
        cout << "paper:" << paper << endl;
    }
};
int main ()
{
    string name, course, pro;
    int num, paper;
    float grade;
    getline(cin, name);
    cin >> num;
    cin.get();
    getline(cin, course);
    cin >> grade;
    cin.get();
    student xiaoming(name, num, course, grade);
    getline(cin, name);
    cin >> num;
    cin.get();
    getline(cin, pro);
    cin >> paper;
    cin.get();
    teacher bai(name, num, pro, paper);
    cout << "Studentinformation:" << endl;
    xiaoming.display();
    cout << endl;
    cout << "Teacherinformation:" << endl;
    bai.display();
    
    return 0;
}
