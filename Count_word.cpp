#include <iostream>
#include <string>
using namespace std;

int word_count(const string &st, char sep = ' '){
    if (st.size() == 0)
        return 0;

    int result = 1;
    for (char ch : st)
    {
        if (ch == sep)
            result++;
    }
    return result;
}

int main()
{
    string s = "";
    cout << word_count(s) << '\n';
    return 0;
}