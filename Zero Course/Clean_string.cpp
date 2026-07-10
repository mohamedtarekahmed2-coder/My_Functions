#include <iostream>
#include <string>
using namespace std;

string clean_string(const string &st, bool keepnums = true)
{
    string result = "";
    result.reserve(st.size());
    
    for (char ch : st)
    {
        if (isalpha(ch) || ch == '_' || (keepnums && isdigit(ch)))
        {
            result += ch;
        }
    }
    return result;
}

int main()
{
    string s = "moham***&^^^%$_ed3333, ((((2@@@!!))))";
    cout << clean_string(s, false);
    return 0;
}