#include <iostream>
using namespace std;

string sub_string (const string &st, int start, int end, bool inc_end = true, bool countspace = true)
{
    string result = "";
    for (int i = start; (inc_end) ? i <= end: i < end; i++)
    {   
        if (st.at(i) == ' ' && !countspace)
            end++;
        result += st.at(i);
    }
    return result;
}

int main(){
    string s = "mohamed tarek";
    cout << sub_string(s, 0, 10) << '\n';

    return 0;
}