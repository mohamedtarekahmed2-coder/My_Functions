#include <iostream>
#include <string>
using namespace std;

string gen_chars(bool caps = true, bool lows = false, bool nums = false)
{
    string result; 

    if (caps)
    {
        for (int i = 'A'; i <= 'Z'; i++)
        {
            result += i;
        }
    }
    if (lows)
    {
        for (int i = 'a'; i <= 'z'; i++)
        {
            result += i;
        }
    }
    if (nums)
    {
        for (int i = '0'; i <= '9'; i++)
        {
            result += i;
        }
    }

    return result;
}

int main()
{
    cout << gen_chars(1,0,1) << '\n';
    return 0;
}