#include <iostream>
#include <string>
using namespace std;

int word_count(const string &st, char sep = ' '){
    if (st.size() == 0)
        return 0;

    int result = (st.at(st.size() - 1) == sep)? 0 : 1;
    for (char ch : st)
    {
        if (ch == sep)
            result++;
    }
    return result;
}

int main()
{
    string s = "mohamed ";
    cout << word_count(s) << '\n';
    return 0;
}