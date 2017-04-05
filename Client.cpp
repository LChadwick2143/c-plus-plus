#include <iostream>
#include <string.h>
using namespace std;
class Client
{
    char *m_name;
    int m_age;
    
    public:
    Client(char *name, int age)
    {
        m_name = new char[strlen(name) + 1];
        strcpy(m_name, name);
        m_age = age;
    }
    ~Client()
    {
        delete []m_name;
    }
    void display()
    {
        cout << "Name:" << m_name << endl;
        cout << "Age:" << m_age << endl;
    }
};
int main()
{
    char name[50];
    int age;
    cin >> name >> age;
    Client client(name, age);
    client.display();
    
    return 0;
}