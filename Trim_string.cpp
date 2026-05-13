#include <iostream>
using namespace std;


string trim_string(const string &st, const string &direction = "All", char ch = ' ')
{
    string result = "";
    if (direction == "All")
    {
        for (int i = 0; i < st.size(); i++)
            if (st.at(i) != ch)
                result += st.at(i);
    }
    else if (direction == "Left")
    {
        bool take_it = false;
        for (int i = 0; i < st.size(); i++)
        {
            if (st.at(i) != ch || take_it)
            {
                result += st.at(i);
                take_it = true;
            }
        }
    }
    else if (direction == "Right")
    {
        bool take_it = true;
        for (int i = 0; i < st.size(); i++)
        {
            if (st.at(i) == ch && take_it)
            {
                result += st.at(i);
            }
            else if (st.at(i) != ch)
            {
                result += st.at(i);
                take_it = false;
            }
        }
    }
    return result;
}

int main()
{
    string s = "@@@Mohamed@@@";
    string d = "All";
    cout << trim_string(s, d, '@') << '\n';
    return 0;
}