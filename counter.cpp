#include <iostream>
#include <string.h>
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
    void countWords(char *s)
    {
        if(*s)
        {
            num = 1;
            for(int i = 0; i < strlen(s); i++)
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
    char sentence[100];
    cin.getline(sentence, 100);
    counter counter;
    counter.countWords(sentence);
    counter.show();
    
    return 0;
}