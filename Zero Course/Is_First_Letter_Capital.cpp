#include <iostream>
#include <string>
using namespace std;

bool first_capital(const string &st)
{
    for (int i = 0; i < st.size(); i++)
    {
        if ((i == 0 || isspace(st[i - 1])) && !isupper(st[i]))
            return false;
    }
    return true;
}

int main()
{
    string s = "Mohamed Tarek";
    cout << first_capital(s);
    return 0;
}