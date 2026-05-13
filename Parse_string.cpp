#include <iostream>
#include <string>
using namespace std;

string parse_str(const string & st)
{
    string result = "";
    result.reserve(st.size());
    
    for(char ch : st){
        if (ch == '=')
            result += ": ";
        else if (ch == '&')
            result += '\n';
        else
            result += ch;
    }
    return result;
}

int main()
{
    string s = "name=mohamed&age=18&country=egypt";
    cout << parse_str(s) << '\n';;
    return 0;
}