#include <iostream>
using namespace std;
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int parse_int(string str)
{
    int result = 0,
        mult = 1;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        if ( '0' <= str.at(i) && str.at(i) <= '9')
        {
            result += (str.at(i) - '0') * mult;
            mult *= 10;
        }
    }
    return result;
}

int main()
{
    fast_io();
    cout << parse_int("11,44,sdef") << '\n'; 
    
    return 0;
}