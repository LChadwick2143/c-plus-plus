#include <iostream>
#include <string>
using namespace std;
class book
{
    protected:
    int num;
    string BookName;
    string BookConcern;
    float price;
    public:
    book(int n=0, string BN="", string BC="", float p=0)
    {
        num = n;
        BookName = BN;
        BookConcern = BC;
        price = p;
    }
    void SetBook()
    {
        cin >> num;
        cin.get();
        getline(cin, BookName);
        getline(cin, BookConcern);
        cin >> price;
        cin.get();
    }
    void ShowBook()
    {
        cout << "Num:" << num << endl;
        cout << "BookName:" << BookName << endl;
        cout << "BookConcern:" << BookConcern << endl;
        cout << "Price:" << price << endl;
    }
};
class author
{
    protected:
    string AuthorName;
    int age;
    string PrintTime;
    public:
    author(string AN="", int a=0, string PT="")
    {
        
        AuthorName = AN;
        age = a;
        PrintTime = PT;
    }
    void SetAuthor()
    {
        getline(cin, AuthorName);
        cin >> age;
        cin.get();
        getline(cin, PrintTime);
    }
    void ShowAuthor()
    {
        int i, j;
        i = PrintTime.find(" ");
        j = PrintTime.rfind(" ");
        PrintTime = PrintTime.replace(i, 1, "-");
        PrintTime = PrintTime.replace(j, 1, "-");
        cout << "AuthorName:" << AuthorName << endl;
        cout << "AuthorAge:" << age << endl;
        cout << "PrintTime:" << PrintTime << endl;
    }
};
class card: public book, public author
{
    string SysName;
    public:
    card(string SN="", int n=0, string BN="", string BC="", float p=0, string AN="", int a=0, string PT=""): book(n, BN, BC, p), author(AN, a, PT)
    {
        SysName = SN;
    }
    void SetCard()
    {
        getline(cin, SysName);
        SetBook();
        SetAuthor();
    }
    void display()
    {
        cout << "SysName:" << SysName << endl;
        ShowBook();
        ShowAuthor();
    }
};
int main()
{
    card c;
    c.SetCard();
    c.display();
    
    return 0;
}
