#include <iostream>
#include <string>
#include <cctype>
using namespace std;
class counter
{
    int num;
    
    public:
    counter()
    {
        num = 0;
    }
    void countWords(string s)
    {
        if(s != "")
        {
            num = 1;
            for(int i = 0; i < s.length(); i++)
                if(isspace(s[i]))
                    num++;
        }
    }
    void show()
    {
        cout << "Words=" << num << endl;
    }
};
int main()
{
    string sentence;
    getline(cin, sentence);
    counter counter;
    counter.countWords(sentence);
    counter.show();
    
    return 0;
}