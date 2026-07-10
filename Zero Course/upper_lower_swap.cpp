#include <iostream>
using namespace std;
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

string to_upper(string str)
{
    for (char &ch : str)
    {
        if ('a' <= ch && ch <= 'z')
            ch -= 32;
    }
    return str;
}

string to_lower(string str)
{
    for (char &ch : str)
    {
        if ('A' <= ch && ch <= 'Z')
            ch += 32;
    }
    return str;
}

string to_swap(string str)
{
    for (char &ch : str)
    {
        if ('A' <= ch && ch <= 'Z')
            ch += 32;
        else if ('a' <= ch && ch <= 'z')
            ch -= 32;
    }
    return str;
}

int main(){
    fast_io();
    cout << to_upper("mohamed TaRek Ahmed") << '\n';
    cout << to_lower("mohamed TaRek Ahmed") << '\n';
    cout << to_swap("mohamed TAREK ahmed") << '\n';

    return 0;
}
 