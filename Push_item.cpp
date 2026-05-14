#include<iostream>
#include<vector>
using namespace std;

vector<string> push_item(vector <string> v, string item)
{
    vector<string> st(v.size() + 1);
    for (int i = 0; i < st.size(); i++)
    {
        if(i != st.size() - 1)
            st[i] = v[i];
        else
            st[i] = item;
    }
    return st;
}

int main()
{
    vector<string> s = {"22"};
    s = push_item(s, "hh");
    cout << s[1];
    return 0;
}