#include<iostream>
#include<vector>
using namespace std;

string Slice(const string &st, int start, int end, int step = 1, bool rev = false)
{
    string result = "";
    for (int i = start; i <= end; i += step)
        (rev)? result = st.at(i) + result : result += st.at(i);
    return result;
}

int main()
{
    cout << Slice("Hello World", 0, 4, 1, true);
    return 0;
}