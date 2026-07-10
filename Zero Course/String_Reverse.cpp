#include <iostream>
using namespace std;
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

string string_reverse(string str)
{
    int size = static_cast<int>(str.size());
    int up = size - 1;
    for (int i = 0; i < size / 2; i++)
        swap(str.at(i), str.at(up - i));
    return str;
}

int main()
{
    fast_io();

    string str = string_reverse("abcd");
    cout << str << '\n';

    return 0;
}