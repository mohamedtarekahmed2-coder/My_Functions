#include <iostream>
using namespace std;
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}


string zFill(string str, int width, char fill = '0')
{
    int width_fill = width - static_cast<int>(str.size());
    for (int i = 0; i < width_fill; i++)
        str = fill + str;
    return str;
}

int main()
{
    fast_io();
    cout << zFill("1111", 10, '*') << '\n';
    cout << zFill("1111", 10, '0') << '\n';
    cout << zFill("1111", 10, '1') << '\n';
    cout << zFill("1111", 10, '%') << '\n';
    return 0;
}