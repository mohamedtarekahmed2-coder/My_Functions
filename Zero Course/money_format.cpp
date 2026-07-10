#include <iostream>
#include <string>
using namespace std;

string money_format(int num){
    string snum = to_string(num);
    string result = "";
    int count = 0;
    for (int i = snum.size() - 1; i >= 0; i--)
    {
        result =  snum[i] + result;
        count ++;
        if (count % 3 == 0 && i != 0)
            result = "," + result;
    }
    return result;
}

int main()
{

    cout << money_format(100) << '\n';
    cout << money_format(1000) << '\n';
    return 0;
}