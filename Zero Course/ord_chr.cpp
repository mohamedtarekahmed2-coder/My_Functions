#include <iostream>
#include <string>
using namespace std;

int ord(const string &st, int num = 0)
{
    return st.at(num);
}

char chr(int num)
{
    return num;
}

int main()
{
    cout << ord("All") << ' ' << chr(65) << '\n';
    return 0;
}