#include <iostream>
using namespace std;
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool isNaN(string str)
{
    for (char c : str)
    {
        if (c < '0' || '9' < c){
            return true ;
        }
    }
    return false;
}

int main()
{
    fast_io();
    cout << isNaN("123g") << '\n';
    cout << isNaN("1234") << '\n';

    return 0;
}